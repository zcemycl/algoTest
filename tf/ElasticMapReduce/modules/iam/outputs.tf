output "emr_service_role" {
  value = aws_iam_role.emr_service_role.name
}

output "emr_autoscaling_role" {
  value = aws_iam_role.emr_autoscaling_role.name
}

output "emr_ec2_instance_profile" {
  value = aws_iam_instance_profile.emr_ec2_instance_profile.name
}