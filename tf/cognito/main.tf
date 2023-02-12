provider "aws" {
  region = var.AWS_REGION
}

module "cognito" {
  source                = "./modules/cognito"
  AWS_REGION            = var.AWS_REGION
  user_pool_name        = var.user_pool_name
  user_pool_client_name = var.user_pool_client_name
  user_pool_domain      = var.user_pool_domain
  deletion_protect      = var.deletion_protect
}

module "iam" {
  source = "./modules/iam"
}

module "lambda" {
  source       = "./modules/lambda"
  iam_role_arn = module.iam.iam_role_arn
}

module "apigw" {
  source          = "./modules/apigw"
  cognito_client  = module.cognito.clientId
  cognito_endpt   = module.cognito.endpoint
  apigw_name      = var.apigw_name
  apigw_auth_name = var.apigw_auth_name
  func_invoke_arn = module.lambda.func_invoke_arn
  func_name       = module.lambda.func_name
  route           = var.route
}
