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

variable "lambda_config" {
  default = {
    name     = "func_onoff_ec2"
    handler  = "lambda_function.lambda_handler"
    runtime  = "python3.8"
    src_file = "lambda_function.py"
  }
}

variable "apigw_config" {
  default = {
    name        = "func_test_api"
    description = "test function api gateway"
    path_part   = "predict"
  }
}

variable "usage_plan" {
  default = {
    name                 = "test_func_usage_plan"
    description          = "test lambda function usage plan"
    quota_limit          = 100000
    quota_period         = "MONTH"
    throttle_burst_limit = 500
    throttle_rate_limit  = 10
    apikey_name          = "testFuncAPI"
  }
}

variable "ec2_alarm_config" {
  default = {
    evaluation_periods = 10
    threshold          = 5
    period             = 720
  }
}