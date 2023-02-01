provider "aws" {
    region = var.AWS_REGION
}

module "vpc" {
    source = "./modules/vpc"
    region = var.AWS_REGION
    tag_author = var.tag_author
    tag_topic = var.tag_topic
}

module "sg" {
    source = "./modules/sg"
    vpc_id = module.vpc.vpc_id
    tag_author = var.tag_author
    tag_topic = var.tag_topic
}

module "ec2" {
    source = "./modules/ec2"
    subnet_id = module.vpc.public_subnet1_id
    vpc_sg_id = [module.sg.vpc_sg_id]
    public_key = var.public_key
    private_key = var.private_key
}