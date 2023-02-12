provider "aws" {
  region = var.AWS_REGION
}

module "keypair" {
  source = "./modules/keypair"
}

module "sg" {
  source = "./modules/sg"
}

module "ec2_instance" {
  source       = "./modules/ec2"
  keypair_name = module.keypair.keyname
  sg_name      = module.sg.sgname
}
