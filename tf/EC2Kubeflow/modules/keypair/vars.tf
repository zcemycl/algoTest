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