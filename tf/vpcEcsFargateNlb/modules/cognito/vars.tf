variable "AWS_REGION" {
  default = "eu-west-2"
}

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