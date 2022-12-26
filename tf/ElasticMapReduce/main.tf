provider "aws" {
    region = var.region
}

module "iam" {
    source = "./modules/iam"
}

module "security" {
    source = "./modules/security"
}

module "storage" {
    source = "./modules/storage"
}

module "emr" {
    source = "./modules/emr"
}
