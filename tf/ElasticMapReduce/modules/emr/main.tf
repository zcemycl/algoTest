resource "aws_key_pair" "example_key" {
  key_name   = "mykey"
  public_key = file("mykey.pub")
}

resource "aws_emr_cluster" "cluster" {
  name          = "emr-test"
  release_label = "emr-5.33.0"
  applications  = ["Spark"]

  additional_info = <<EOF
{
  "instanceAwsClientConfiguration": {
    "proxyPort": 8099,
    "proxyHost": "myproxy.example.com"
  }
}
EOF

  termination_protection            = false
  keep_job_flow_alive_when_no_steps = true

  ec2_attributes {
    key_name                          = aws_key_pair.example_key.key_name
    emr_managed_master_security_group = var.emr_master_security_group
    emr_managed_slave_security_group  = var.emr_slave_security_group
    instance_profile                  = var.emr_ec2_instance_profile
  }

  ebs_root_volume_size = "12"

  master_instance_group {
    name           = "EMR master"
    instance_type  = "m5.xlarge"
    instance_count = "1"

    ebs_config {
      size                 = "40"
      type                 = "gp2"
      volumes_per_instance = 1
    }

  }

  core_instance_group {
    name           = "EMR slave"
    instance_type  = "m5.xlarge"
    instance_count = "2"

    ebs_config {
      size                 = "40"
      type                 = "gp2"
      volumes_per_instance = 1
    }
  }

  service_role     = var.emr_service_role
  autoscaling_role = var.emr_autoscaling_role
}