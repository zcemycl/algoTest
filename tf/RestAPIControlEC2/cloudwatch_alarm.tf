resource "aws_cloudwatch_metric_alarm" "example_alarm" {
  alarm_name          = "example_alarm"
  comparison_operator = "LessThanOrEqualToThreshold"
  evaluation_periods  = lookup(var.ec2_alarm_config, "evaluation_periods")
  metric_name         = "CPUUtilization"
  namespace           = "AWS/EC2"
  period              = lookup(var.ec2_alarm_config, "period")
  statistic           = "Average"
  threshold           = lookup(var.ec2_alarm_config, "threshold")

  alarm_description = <<EOT
    Stop the EC2 instance when CPU utilization stays below 
    ${lookup(var.ec2_alarm_config, "threshold")}% on average 
    for ${lookup(var.ec2_alarm_config, "evaluation_periods")} periods of
    ${lookup(var.ec2_alarm_config, "period")} seconds.
    EOT

  alarm_actions = ["arn:aws:automate:${var.AWS_REGION}:ec2:stop"]

  dimensions = {
    InstanceId = "${aws_instance.example.id}"
  }
}