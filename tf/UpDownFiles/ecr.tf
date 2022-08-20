resource "aws_ecr_repository" "my_first_ecr_repo" {
  name = "my-first-ecr-repo" # Naming my repository
  force_delete = true

  provisioner "local-exec" {
    command = <<-EOT
      exec `echo ${aws_ecr_repository.my_first_ecr_repo.arn} >> info.txt`
      exec `echo ${aws_ecr_repository.my_first_ecr_repo.registry_id} >> info.txt`
      exec `echo ${aws_ecr_repository.my_first_ecr_repo.repository_url} >> info.txt`
    EOT
     
  }
}

resource "null_resource" "push_docker_image" {
  provisioner "local-exec" {
    command = "aws ecr get-login-password --region ${var.AWS_REGION} | docker login --username AWS --password-stdin ${aws_ecr_repository.my_first_ecr_repo.registry_id}.dkr.ecr.${var.AWS_REGION}.amazonaws.com >> info.txt"
  }
  provisioner "local-exec" {
    command = "docker tag dash:latest ${aws_ecr_repository.my_first_ecr_repo.repository_url}:latest >> info.txt"
  }
  provisioner "local-exec" {
    command = "docker push ${aws_ecr_repository.my_first_ecr_repo.repository_url}:latest >> info.txt"
  }
  depends_on = [
    aws_ecr_repository.my_first_ecr_repo
  ]
}