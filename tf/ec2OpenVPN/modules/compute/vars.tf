variable "ami" {
  default = "ami-071f6f7c386495dc0"
}

variable "availability_zone" {
  default = "eu-west-2a"
}

variable "instance_type" {
  default = "t2.micro"
}

variable "sg_name" {

}

variable "keypair_name" {

}

variable "root_volume_size" {
  default = 40
}

variable "root_volume_type" {
  default = "gp2"
}

variable "user" {
  default = "ubuntu"
}

variable "private_key" {
  default = "mykey"
}

variable "instance_tag" {
  default = "ec2 example terraform instance"
}

variable "is_before_ami" {

}