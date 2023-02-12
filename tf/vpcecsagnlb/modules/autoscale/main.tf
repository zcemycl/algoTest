resource "aws_autoscaling_group" "asg" {
  name                 = "asg"
  vpc_zone_identifier  = var.vpc_zone_identifier
  launch_configuration = var.launch_configuration

  desired_capacity          = 2
  min_size                  = 1
  max_size                  = 3
  health_check_grace_period = 300
  health_check_type         = "EC2"
}