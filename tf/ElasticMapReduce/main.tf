provider "aws" {
  region = var.region
}

module "iam" {
  source   = "./modules/iam"
  iam_name = var.iam_name
}

module "security" {
  source = "./modules/security"

}

module "storage" {
  source           = "./modules/storage"
  s3_buckets_names = var.s3_buckets_names
}

module "emr" {
  source                    = "./modules/emr"
  emr_service_role          = module.iam.emr_service_role
  emr_autoscaling_role      = module.iam.emr_autoscaling_role
  emr_ec2_instance_profile  = module.iam.emr_ec2_instance_profile
  emr_master_security_group = module.security.sg_master_id
  emr_slave_security_group  = module.security.sg_slave_id
}
