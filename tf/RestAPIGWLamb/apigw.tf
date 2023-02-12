resource "aws_api_gateway_rest_api" "func_test_api" {
  name        = "func_test_api"
  description = "test function api gateway"
  endpoint_configuration {
    types = ["REGIONAL"]
  }
}

resource "aws_api_gateway_resource" "predictResource" {
  rest_api_id = aws_api_gateway_rest_api.func_test_api.id
  parent_id   = aws_api_gateway_rest_api.func_test_api.root_resource_id
  path_part   = "predict"
}

resource "aws_api_gateway_method" "predictMethod" {
  rest_api_id      = aws_api_gateway_rest_api.func_test_api.id
  resource_id      = aws_api_gateway_resource.predictResource.id
  http_method      = "GET"
  authorization    = "NONE"
  api_key_required = true
}

resource "aws_api_gateway_integration" "predictInt" {
  rest_api_id             = aws_api_gateway_rest_api.func_test_api.id
  resource_id             = aws_api_gateway_resource.predictResource.id
  http_method             = aws_api_gateway_method.predictMethod.http_method
  integration_http_method = "POST"
  type                    = "AWS_PROXY"
  uri                     = aws_lambda_function.test_lambda.invoke_arn
}

resource "aws_api_gateway_deployment" "predictDeploy" {
  depends_on = [
    aws_api_gateway_integration.predictInt
  ]
  rest_api_id = aws_api_gateway_rest_api.func_test_api.id
  stage_name  = "v1"
  triggers = {
    redeployment = sha1(jsonencode([
      aws_api_gateway_resource.predictResource,
      aws_api_gateway_method.predictMethod,
      aws_api_gateway_integration.predictInt
    ]))
  }
  lifecycle {
    create_before_destroy = true
  }
  provisioner "local-exec" {
    command = "echo ${aws_api_gateway_deployment.predictDeploy.invoke_url} >> apikey.txt"
  }
}

resource "aws_lambda_permission" "apigwPermit" {
  statement_id  = "AllowAPIGatewayInvoke"
  action        = "lambda:InvokeFunction"
  function_name = aws_lambda_function.test_lambda.function_name
  principal     = "apigateway.amazonaws.com"
  source_arn    = "${aws_api_gateway_rest_api.func_test_api.execution_arn}/*/*"
}