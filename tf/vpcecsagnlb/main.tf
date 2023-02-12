provider "aws" {
  region = var.AWS_REGION
}

module "vpc" {
  source     = "./modules/vpc"
  region     = var.AWS_REGION
  tag_author = var.tag_author
  tag_topic  = var.tag_topic
}

module "ecr" {
  source           = "./modules/ecr"
  AWS_REGION       = var.AWS_REGION
  ecr_name         = var.ecr_name
  force_delete     = var.ecr_force_delete
  local_image_name = var.local_image_name
}

module "cognito" {
  source                = "./modules/cognito"
  AWS_REGION            = var.AWS_REGION
  user_pool_name        = var.user_pool_name
  user_pool_client_name = var.user_pool_client_name
  user_pool_domain      = var.user_pool_domain
  deletion_protect      = var.deletion_protect
}

module "sg" {
  source         = "./modules/sg"
  vpc_id         = module.vpc.vpc_id
  vpc_cidr_block = module.vpc.vpc_cidr_block
  tag_author     = var.tag_author
  tag_topic      = var.tag_topic
}

module "iam" {
  source = "./modules/iam"
}

module "compute" {
  source = "./modules/compute"
  # subnet_id = module.vpc.private_subnet1_id
  vpc_sg_id                 = [module.sg.sg_ecs_id]
  iam_instance_profile_name = module.iam.iam_instance_profile_name
  ecs_cluster_name          = var.ecs_cluster_name
  tag_author                = var.tag_author
  tag_topic                 = var.tag_topic
}

module "lb" {
  source             = "./modules/lb"
  vpc_id             = module.vpc.vpc_id
  private_subnet1_id = module.vpc.private_subnet1_id
}

module "ecs" {
  source                      = "./modules/ecs"
  ecs_task_execution_role_arn = module.iam.ecs_task_execution_role_arn
  ecr_repo_url                = module.ecr.ecr_repo_url
  container_name              = "fastapi-trial"
  subnets                     = [module.vpc.private_subnet1_id]
  security_groups             = [module.sg.sg_lb_id]
  lb_target_group_arn         = module.lb.lb_target_group_arn
  ecs_cluster_name            = var.ecs_cluster_name

  depends_on = [
    module.ecr
  ]
}

module "autoscale" {
  source               = "./modules/autoscale"
  vpc_zone_identifier  = [module.vpc.private_subnet1_id]
  launch_configuration = module.compute.ecs_launch_config_name
}


module "apigw" {
  source             = "./modules/apigw"
  cognito_client     = module.cognito.clientId
  cognito_endpt      = module.cognito.endpoint
  apigw_name         = var.apigw_name
  apigw_auth_name    = var.apigw_auth_name
  vpc_sg_id          = [module.sg.sg_lb_id]
  private_subnet1_id = module.vpc.private_subnet1_id
  lb_listener_arn    = module.lb.lb_listener_arn
}