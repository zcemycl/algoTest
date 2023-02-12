resource "aws_apigatewayv2_api" "apigw" {
  name          = var.apigw_name
  protocol_type = "HTTP"
}

resource "aws_apigatewayv2_authorizer" "apigw_auth" {
  api_id           = aws_apigatewayv2_api.apigw.id
  authorizer_type  = "JWT"
  name             = var.apigw_auth_name
  identity_sources = ["$request.header.Authorization"]

  jwt_configuration {
    issuer   = "https://${var.cognito_endpt}"
    audience = [var.cognito_client]
  }
}

resource "aws_apigatewayv2_integration" "apigw_inte" {
  api_id                 = aws_apigatewayv2_api.apigw.id
  integration_type       = "AWS_PROXY"
  connection_type        = "INTERNET"
  integration_method     = "POST"
  payload_format_version = "2.0"

  description     = "smoking function"
  integration_uri = var.func_invoke_arn
}

resource "aws_apigatewayv2_route" "apigw_route" {
  api_id             = aws_apigatewayv2_api.apigw.id
  route_key          = "GET /${var.route}"
  authorization_type = "JWT"
  authorizer_id      = aws_apigatewayv2_authorizer.apigw_auth.id
  target             = "integrations/${aws_apigatewayv2_integration.apigw_inte.id}"
}

resource "aws_apigatewayv2_stage" "apigw_stage" {
  api_id      = aws_apigatewayv2_api.apigw.id
  name        = "$default"
  auto_deploy = true
}

resource "aws_lambda_permission" "apigw_lambda" {
  statement_id  = "AllowExecutionFromAPIGateway"
  action        = "lambda:InvokeFunction"
  function_name = var.func_name
  principal     = "apigateway.amazonaws.com"

  source_arn = "${aws_apigatewayv2_api.apigw.execution_arn}/*/*/${var.route}"
}