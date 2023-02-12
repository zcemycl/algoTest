provider "aws" {
    region = var.AWS_REGION
}

module "vpc" {
    source = "./modules/vpc"
    region = var.AWS_REGION
    tag_author = var.tag_author
    tag_topic = var.tag_topic
    cluster_name = var.cluster_name
}

module "sg" {
    source = "./modules/sg"
    vpc_id = module.vpc.vpc_id
}

module "iam" {
    source = "./modules/iam"
    cluster_name = var.cluster_name
}

module "eks" {
    source = "./modules/eks"
    cluster_name = var.cluster_name
    cluster_version = var.cluster_version
    eks_cluster_iam_arn = module.iam.eks_cluster_iam_arn
    eks_nodes_iam_arn = module.iam.eks_nodes_iam_arn
    subnet_ids = [
        module.vpc.private_subnet1_id, 
        module.vpc.public_subnet1_id
    ]
    private_subnet_ids = [
        module.vpc.private_subnet1_id
    ]

    depends_on = [module.iam]
}