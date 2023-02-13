provider "aws" {
  region = var.AWS_REGION
}

module "vpc" {
  source       = "./modules/vpc"
  region       = var.AWS_REGION
  tag_author   = var.tag_author
  tag_topic    = var.tag_topic
  cluster_name = var.cluster_name
}
