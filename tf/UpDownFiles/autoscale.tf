resource "aws_launch_configuration" "ecs_launch_config" {
  image_id             = "ami-070d0f1b66ccfd0fa"
  iam_instance_profile = aws_iam_instance_profile.ecs_agent.name
  security_groups      = [aws_security_group.service_security_group.id]
  user_data            = "#!/bin/bash\necho ECS_CLUSTER=dash-cluster >> /etc/ecs/ecs.config"
  instance_type        = "t3.micro"
  root_block_device {
    volume_size = 30
  }
  associate_public_ip_address = true
  # associate_public_ip_address = false
}

resource "aws_autoscaling_group" "failure_analysis_ecs_asg" {
  name                 = "asg"
  vpc_zone_identifier  = aws_subnet.pub_subnet.*.id
  launch_configuration = aws_launch_configuration.ecs_launch_config.name

  desired_capacity          = 2
  min_size                  = 1
  max_size                  = 10
  health_check_grace_period = 300
  health_check_type         = "EC2"
}