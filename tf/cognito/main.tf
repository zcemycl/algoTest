provider "aws" {
    region = var.AWS_REGION
}

module "cognito" {
    source = "./modules/cognito"
    AWS_REGION = var.AWS_REGION
    user_pool_name = var.user_pool_name
    user_pool_client_name = var.user_pool_client_name
    user_pool_domain = var.user_pool_domain
    deletion_protect = var.deletion_protect
}
