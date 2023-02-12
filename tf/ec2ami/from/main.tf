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
  source        = "../modules/compute"
  sg_name       = module.security.sgname
  keypair_name  = module.keypair.keyname
  is_before_ami = true
}

module "ami" {
  source          = "../modules/ami"
  src_instance_id = module.compute_orig.instance_id
}

module "compute_copy" {
  source        = "../modules/compute"
  sg_name       = module.security.sgname
  keypair_name  = module.keypair.keyname
  is_before_ami = false
  ami           = module.ami.ami_id
}