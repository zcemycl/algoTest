provider "aws" {
  region = var.AWS_REGION
}

module "vpc" {
  source     = "./modules/vpc"
  region     = var.AWS_REGION
  tag_author = var.tag_author
  tag_topic  = var.tag_topic
}

module "sg" {
  source         = "./modules/sg"
  vpc_id         = module.vpc.vpc_id
  vpc_cidr_block = module.vpc.vpc_cidr_block
  tag_author     = var.tag_author
  tag_topic      = var.tag_topic
}

module "ec2" {
  source    = "./modules/ec2"
  subnet_id = module.vpc.private_subnet1_id
  vpc_sg_id = [module.sg.vpc_sg_id]
}

module "lb" {
  source             = "./modules/lb"
  vpc_id             = module.vpc.vpc_id
  ec2_id             = module.ec2.ec2_id
  private_subnet1_id = module.vpc.private_subnet1_id
}

module "cognito" {
  source                = "./modules/cognito"
  AWS_REGION            = var.AWS_REGION
  user_pool_name        = var.user_pool_name
  user_pool_client_name = var.user_pool_client_name
  user_pool_domain      = var.user_pool_domain
  deletion_protect      = var.deletion_protect
}

module "apigw" {
  source             = "./modules/apigw"
  cognito_client     = module.cognito.clientId
  cognito_endpt      = module.cognito.endpoint
  apigw_name         = var.apigw_name
  apigw_auth_name    = var.apigw_auth_name
  vpc_sg_id          = [module.sg.vpc_sg_id]
  private_subnet1_id = module.vpc.private_subnet1_id
  lb_listener_arn    = module.lb.lb_listener_arn
}