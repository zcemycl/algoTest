locals {
    lambda_zip_location = "outputs/lambda_function.zip"
}

data "archive_file" "lambda_function" {
    type = "zip"
    source_file = "lambda_function.py"
    output_path = "${local.lambda_zip_location}"
}

resource "aws_lambda_function" "test_lambda" {
    filename = "${local.lambda_zip_location}"
    function_name = "func_test"
    handler = "lambda_function.lambda_handler"
    source_code_hash = data.archive_file.lambda_function.output_base64sha256
    runtime = "python3.6"
    role = "${aws_iam_role.lambda_role.arn}"
}