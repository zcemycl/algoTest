variable "AWS_REGION" {
  default = "eu-west-2"
}

variable "tag_author" {
  default = "Leo Leung"
}

variable "tag_topic" {
  default = "Learning and Testing"
}

# ecs
variable "ecs_cluster_name" {
  default = "fastapi-cluster"
}

# ecr
variable "ecr_name" {
  default = "ecr-test-leo"
}

variable "ecr_force_delete" {
  default = true
}

variable "local_image_name" {
  default = "fastapi-trial"
}

# cognito
variable "user_pool_name" {
  default = "leotestappcognito1234"
}

variable "user_pool_client_name" {
  default = "leoapptestcognito1234"
}

variable "user_pool_domain" {
  default = "leoappcogn"
}

variable "deletion_protect" {
  default = "INACTIVE"
}

# api gateway
variable "apigw_name" {
  default = "smokeapigw"
}

variable "apigw_auth_name" {
  default = "smokingauth"
}
