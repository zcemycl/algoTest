resource "aws_iam_user" "example" {
  name = "example"
}

resource "aws_iam_service_specific_credential" "example" {
  service_name = "codecommit.amazonaws.com"
  user_name    = aws_iam_user.example.name

  provisioner "local-exec" {
    command = "echo ${aws_iam_service_specific_credential.example.service_user_name} >> info.txt"
  }
  provisioner "local-exec" {
    command = "echo ${aws_iam_service_specific_credential.example.service_password} >> info.txt"
  }
}

resource "aws_iam_user_policy" "lb_ro" {
  name = "example_policy"
  user = aws_iam_user.example.name

  policy = file("iam/codecommit_policy.json")
}