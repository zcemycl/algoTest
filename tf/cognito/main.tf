provider "aws" {
    region = var.AWS_REGION
}

module "cognito" {
    source = "./modules/cognito"
    AWS_REGION = var.AWS_REGION
    user_pool_name = var.user_pool_name
    user_pool_client_name = var.user_pool_client_name
    user_pool_domain = var.user_pool_domain
    deletion_protect = var.deletion_protect
}

resource "aws_iam_role" "lambda_role" {
    name = "lambda_role"
    assume_role_policy = "${file("lambda_assume_policy.json")}"
}

resource "aws_iam_role_policy" "lambda_policy" {
    name = "lambda_policy"
    role = "${aws_iam_role.lambda_role.id}"
    policy = "${file("lambda_policy.json")}"
}

locals {
    lambda_zip_location = "lambda_function.zip"
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
    runtime = "python3.9"
    role = "${aws_iam_role.lambda_role.arn}"
}

resource "aws_apigatewayv2_api" "apigw" {
    name = var.apigw_name
    protocol_type = "HTTP"
}

resource "aws_apigatewayv2_authorizer" "apigw_auth" {
    api_id = aws_apigatewayv2_api.apigw.id
    authorizer_type = "JWT"
    name = var.apigw_auth_name
    identity_sources = ["$request.header.Authorization"]

    jwt_configuration {
        issuer = "https://${module.cognito.endpoint}"
        audience = [module.cognito.clientId]
    }
}

resource "aws_apigatewayv2_integration" "apigw_inte" {
    api_id = aws_apigatewayv2_api.apigw.id
    integration_type = "AWS_PROXY"
    connection_type = "INTERNET"
    integration_method = "POST"
    payload_format_version = "2.0"

    description = "smoking function"
    integration_uri = aws_lambda_function.test_lambda.invoke_arn
}

resource "aws_apigatewayv2_route" "apigw_route" {
    api_id = aws_apigatewayv2_api.apigw.id
    route_key = "GET /abc"
    authorization_type = "JWT"
    authorizer_id = aws_apigatewayv2_authorizer.apigw_auth.id
    target = "integrations/${aws_apigatewayv2_integration.apigw_inte.id}"
}

resource "aws_apigatewayv2_stage" "apigw_stage" {
    api_id = aws_apigatewayv2_api.apigw.id
    name = "$default"
    auto_deploy = true
}

resource "aws_lambda_permission" "apigw_lambda" {
    statement_id = "AllowExecutionFromAPIGateway"
    action = "lambda:InvokeFunction"
    function_name = aws_lambda_function.test_lambda.function_name
    principal = "apigateway.amazonaws.com"

    source_arn = "${aws_apigatewayv2_api.apigw.execution_arn}/*/*/abc"
}