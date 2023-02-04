resource "aws_autoscaling_group" "ag" {
  name     = "auto-scaling-group-ec2"
  min_size = 2
  max_size = 3

  health_check_type   = "EC2"
  vpc_zone_identifier = [var.private_subnet1_id]
  target_group_arns   = [var.lb_target_group_arn]

  mixed_instances_policy {
    launch_template {
      launch_template_specification {
        launch_template_id = var.compute_template_id
      }
      override {
        instance_type = "t2.micro"
      }
    }
  }
}

resource "aws_autoscaling_policy" "agp" {
  name                   = "auto-scaling-group-ec2-policy"
  policy_type            = "TargetTrackingScaling"
  autoscaling_group_name = aws_autoscaling_group.ag.name

  estimated_instance_warmup = 300

  target_tracking_configuration {
    predefined_metric_specification {
      predefined_metric_type = "ASGAverageCPUUtilization"
    }

    target_value = 25.0
  }
}
