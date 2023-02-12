output "iam_instance_profile_name" {
  value = aws_iam_instance_profile.ecs_agent.name
}

output "ecs_task_execution_role_arn" {
  value = aws_iam_role.ecsTaskExecutionRole.arn
}