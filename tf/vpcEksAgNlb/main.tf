provider "aws" {
  region = var.AWS_REGION
}

module "ecr" {
  source           = "./modules/ecr"
  AWS_REGION       = var.AWS_REGION
  ecr_name         = var.ecr_name
  force_delete     = var.ecr_force_delete
  local_image_name = var.local_image_name
}

resource "local_file" "ecr_fillin" {
  filename = "k8s/aws/server.yaml"
  content = templatefile("k8s/aws/server.tftpl",
  { config = { "image" = module.ecr.ecr_repo_url } })

  depends_on = [
    module.ecr
  ]
}

module "vpc" {
  source       = "./modules/vpc"
  region       = var.AWS_REGION
  tag_author   = var.tag_author
  tag_topic    = var.tag_topic
  cluster_name = var.cluster_name
}

module "sg" {
  source = "./modules/sg"
  vpc_id = module.vpc.vpc_id
}

module "iam" {
  source       = "./modules/iam"
  cluster_name = var.cluster_name
}

module "eks" {
  source              = "./modules/eks"
  cluster_name        = var.cluster_name
  cluster_version     = var.cluster_version
  eks_cluster_iam_arn = module.iam.eks_cluster_iam_arn
  eks_nodes_iam_arn   = module.iam.eks_nodes_iam_arn
  subnet_ids = [
    module.vpc.private_subnet1_id,
    module.vpc.private_subnet2_id,
    module.vpc.public_subnet1_id,
    module.vpc.public_subnet2_id
  ]
  private_subnet_ids = [
    module.vpc.private_subnet1_id,
    module.vpc.private_subnet2_id
  ]

  depends_on = [module.iam]
}

resource "null_resource" "apply_k8s" {
  provisioner "local-exec" {
    command = "aws eks --region ${var.AWS_REGION} update-kubeconfig --name ${var.cluster_name}"
  }

  provisioner "local-exec" {
    command = "kubectl delete secret regcred --ignore-not-found"
  }

  provisioner "local-exec" {
    command = "kubectl create secret docker-registry regcred --docker-server=${module.ecr.ecr_repo_url} --docker-username=AWS --docker-password=${module.ecr.ecr_token}"
  }

  provisioner "local-exec" {
    command = "kubectl apply -f k8s/aws/server.yaml"
  }

  provisioner "local-exec" {
    command = "sleep 60"
  }

  depends_on = [module.eks]
}

data "external" "get_lb_listener_arn" {
  program = ["bash", "k8s/aws/get_listenerarn.sh"]

  depends_on = [
    null_resource.apply_k8s
  ]
}

module "apigw" {
  source = "./modules/apigw"
  vpc_sg_id = [
    module.sg.vpc_link_sg_id
  ]
  private_subnet_ids = [
    module.vpc.private_subnet1_id,
    module.vpc.private_subnet2_id
  ]
  lb_listener_arn = data.external.get_lb_listener_arn.result.listenerarn
}
