output "ecr_repo_url" {
  value = aws_ecr_repository.ecr_repo.repository_url
}

output "ecr_repo_arn" {
  value = aws_ecr_repository.ecr_repo.arn
}

output "ecr_registry_id" {
  value = aws_ecr_repository.ecr_repo.registry_id
}