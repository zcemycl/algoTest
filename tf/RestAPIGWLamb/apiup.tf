resource "aws_api_gateway_usage_plan" "test_func_usage_plan" {
  name        = "test_func_usage_plan"
  description = "test lambda function usage plan"
  api_stages {
    api_id = aws_api_gateway_rest_api.func_test_api.id
    stage  = aws_api_gateway_deployment.predictDeploy.stage_name
  }
  quota_settings {
    limit  = 1000000
    period = "MONTH"
  }
  throttle_settings {
    burst_limit = 500
    rate_limit  = 20
  }
}

resource "aws_api_gateway_usage_plan_key" "main" {
  key_id        = aws_api_gateway_api_key.test_func_api_key.id
  key_type      = "API_KEY"
  usage_plan_id = aws_api_gateway_usage_plan.test_func_usage_plan.id
}