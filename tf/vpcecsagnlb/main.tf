provider "aws" {
    region = var.AWS_REGION
}

module "vpc" {
    source = "./modules/vpc"
    region = var.AWS_REGION
    tag_author = var.tag_author
    tag_topic = var.tag_topic
}

module "ecr" {
    source = "./modules/ecr"
    AWS_REGION = var.AWS_REGION
    ecr_name = var.ecr_name
    force_delete = var.ecr_force_delete
    local_image_name = var.local_image_name
}

module "cognito" {
    source = "./modules/cognito"
    AWS_REGION = var.AWS_REGION
    user_pool_name = var.user_pool_name
    user_pool_client_name = var.user_pool_client_name
    user_pool_domain = var.user_pool_domain
    deletion_protect = var.deletion_protect
}

module "sg" {
    source = "./modules/sg"
    vpc_id = module.vpc.vpc_id
    vpc_cidr_block = module.vpc.vpc_cidr_block
    tag_author = var.tag_author
    tag_topic = var.tag_topic
}

module "iam" {

}

module "ecs" {

}

module "compute" {

}

module "lb" {

}

module "apigw" {
    
}