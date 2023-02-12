provider "aws" {
  region = var.AWS_REGION
}

module "keypair" {
  source = "../modules/keypair"
}

module "security" {
  source = "../modules/security"
}

module "compute_orig" {
  source            = "../modules/compute"
  sg_name           = module.security.sgname
  keypair_name      = module.keypair.keyname
  is_before_ami     = true
  ami               = var.AWS_EC2_AMI
  availability_zone = var.AWS_AZ
}
