resource "aws_codecommit_repository" "leo_test_repo" {
  repository_name = "leoTestRepo"
  description     = "Test Codecommit... "

  provisioner "local-exec" {
    command = "echo ${aws_codecommit_repository.leo_test_repo.clone_url_http} >> info.txt"
  }

  tags = {
    Service = "codecommit"
    Author  = "leo"
    Project = "cicdpipeline"
  }
}