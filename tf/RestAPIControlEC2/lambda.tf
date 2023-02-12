locals {
  lambda_zip_location = "outputs/lambda_function.zip"
}

data "archive_file" "lambda_function" {
  type        = "zip"
  source_file = lookup(var.lambda_config, "src_file")
  output_path = local.lambda_zip_location
}

resource "aws_lambda_function" "test_lambda" {
  filename         = local.lambda_zip_location
  function_name    = lookup(var.lambda_config, "name")
  handler          = lookup(var.lambda_config, "handler")
  source_code_hash = data.archive_file.lambda_function.output_base64sha256
  runtime          = lookup(var.lambda_config, "runtime")
  role             = aws_iam_role.lambda_role_2.arn

  provisioner "local-exec" {
    command = "echo ${aws_lambda_function.test_lambda.invoke_arn} >> info.txt"
  }
}

