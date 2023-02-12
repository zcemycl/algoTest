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
  api_id             = aws_apigatewayv2_api.apigw.id
  integration_type   = "HTTP_PROXY"
  connection_type    = "INTERNET"
  integration_method = "ANY"
  # payload_format_version = "2.0"

  description     = "smoking function"
  integration_uri = "http://${var.ec2_public_ip}:8080/{proxy}"
}

resource "aws_apigatewayv2_route" "apigw_route" {
  api_id             = aws_apigatewayv2_api.apigw.id
  route_key          = "ANY /{proxy+}"
  authorization_type = "JWT"
  authorizer_id      = aws_apigatewayv2_authorizer.apigw_auth.id
  target             = "integrations/${aws_apigatewayv2_integration.apigw_inte.id}"
}

resource "aws_apigatewayv2_stage" "apigw_stage" {
  api_id      = aws_apigatewayv2_api.apigw.id
  name        = "$default"
  auto_deploy = true
}
