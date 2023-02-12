variable "cognito_client" {

}

variable "cognito_endpt" {

}

variable "vpc_sg_id" {

}

variable "private_subnet1_id" {

}

variable "lb_listener_arn" {

}

variable "apigw_name" {
  default = "smokeapigw"
}

variable "apigw_auth_name" {
  default = "smokingauth"
}
