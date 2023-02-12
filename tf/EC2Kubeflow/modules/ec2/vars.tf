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
    # type = "t2.micro"
    type = "t2.2xlarge"
    # type = "g4dn.xlarge"
    ami              = "ami-071f6f7c386495dc0"
    root_volume_size = 100
    root_volume_type = "gp2"
    root_volume_iops = 100
    user             = "ubuntu"
    private_key      = "mykey"
    public_key       = "mykey.pub"
    key_name         = "mykey"
    sg_name          = "security group for example ec2"
    sg_tag           = "sg"
  }
}

variable "keypair_name" {
  type    = string
  default = ""
}

variable "sg_name" {
  type    = string
  default = ""
}

variable "ebs_config" {
  default = {
    region               = "eu-west-2"
    az                   = "eu-west-2a"
    size                 = 10
    iops                 = 100
    type                 = "io2"
    multi_attach_enabled = false
  }
}

variable "ec2_alarm_config" {
  default = {
    evaluation_periods = 10
    threshold          = 5
    period             = 720
  }
}
