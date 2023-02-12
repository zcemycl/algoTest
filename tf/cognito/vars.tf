variable "AWS_REGION" {
  default = "eu-west-2"
}

# cognito
variable "user_pool_name" {
  default = "leotestappcognito1234"
}

variable "user_pool_client_name" {
  default = "leoapptestcognito1234"
}

variable "user_pool_domain" {
  default = "leotestapp1234"
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

variable "route" {
  default = "abc"
}