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
  source     = "./modules/sg"
  vpc_id     = module.vpc.vpc_id
  tag_author = var.tag_author
  tag_topic  = var.tag_topic
}

module "ec2" {
  source      = "./modules/ec2"
  subnet_id   = module.vpc.public_subnet1_id
  vpc_sg_id   = [module.sg.vpc_sg_id]
  public_key  = var.public_key
  private_key = var.private_key
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
  source          = "./modules/apigw"
  cognito_client  = module.cognito.clientId
  cognito_endpt   = module.cognito.endpoint
  apigw_name      = var.apigw_name
  apigw_auth_name = var.apigw_auth_name
  ec2_public_ip   = module.ec2.ec2_public_ip
}