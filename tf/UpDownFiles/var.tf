variable "AWS_REGION" {
  default = "eu-west-2"
}

variable "AWS_AZ" {
  default = "eu-west-2a"
}

variable "ec2_config" {
  default = {
    name   = "ec2 example terraform instance"
    region = "eu-west-2"
    az     = "eu-west-2a"
    type   = "t2.micro"
    # type = "g4dn.xlarge"
    ami              = "ami-0b2834542914df958"
    root_volume_size = 50
    root_volume_type = "io2"
    root_volume_iops = 100
    user             = "ubuntu"
    private_key      = "mykey"
    public_key       = "mykey.pub"
    key_name         = "mykey"
    sg_name          = "security group for example ec2"
    sg_tag           = "sg"
  }
}

variable "public_subnets" {
  default = ["10.0.1.0/24", "10.0.2.0/24"]
}

variable "private_subnets" {
  default = ["10.0.3.0/24", "10.0.4.0/24"]
}

variable "availability_zones" {
  default = ["eu-west-2a", "eu-west-2b"]
}