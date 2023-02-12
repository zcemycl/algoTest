resource "aws_iam_role" "lambda_role_2" {
  name               = "lambda_role_2"
  assume_role_policy = file("iam/lambda_assume_policy.json")
}

resource "aws_iam_role_policy" "lambda_policy" {
  name   = "lambda_policy"
  role   = aws_iam_role.lambda_role_2.id
  policy = file("iam/lambda_policy.json")
}