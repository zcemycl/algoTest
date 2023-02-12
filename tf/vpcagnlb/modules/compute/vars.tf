variable "AWS_REGION" {
  default = "eu-west-2"
}

variable "tag_author" {
  default = "Leo Leung"
}

variable "tag_topic" {
  default = "Learning and Testing"
}

variable "subnet_id" {

}

variable "vpc_sg_id" {

}

variable "ami" {
  default = "ami-071f6f7c386495dc0"
}

variable "availability_zone" {
  default = "eu-west-2a"
}

variable "instance_type" {
  default = "t2.micro"
}
