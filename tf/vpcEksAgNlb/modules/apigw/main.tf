resource "aws_apigatewayv2_api" "apigw" {
  name          = var.apigw_name
  protocol_type = "HTTP"
}

resource "aws_apigatewayv2_stage" "apigw_stage" {
  api_id      = aws_apigatewayv2_api.apigw.id
  name        = "$default"
  auto_deploy = true
}

resource "aws_apigatewayv2_vpc_link" "apigw_vpclink" {
  name               = "${var.apigw_name} vpc link"
  security_group_ids = var.vpc_sg_id

  subnet_ids = var.private_subnet_ids

}

# resource "aws_apigatewayv2_authorizer" "apigw_auth" {
#     api_id = aws_apigatewayv2_api.apigw.id
#     authorizer_type = "JWT"
#     name = var.apigw_auth_name
#     identity_sources = ["$request.header.Authorization"]

#     jwt_configuration {
#         issuer = "https://${var.cognito_endpt}"
#         audience = [var.cognito_client]
#     }
# }

resource "aws_apigatewayv2_integration" "apigw_inte" {
  api_id             = aws_apigatewayv2_api.apigw.id
  integration_type   = "HTTP_PROXY"
  connection_type    = "VPC_LINK"
  integration_method = "ANY"
  connection_id      = aws_apigatewayv2_vpc_link.apigw_vpclink.id
  integration_uri    = var.lb_listener_arn

}

resource "aws_apigatewayv2_route" "apigw_route" {
  api_id    = aws_apigatewayv2_api.apigw.id
  route_key = "ANY /{proxy+}"
  # authorization_type = "JWT"
  # authorizer_id = aws_apigatewayv2_authorizer.apigw_auth.id
  target = "integrations/${aws_apigatewayv2_integration.apigw_inte.id}"
}


