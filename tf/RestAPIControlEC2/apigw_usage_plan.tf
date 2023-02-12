resource "aws_api_gateway_usage_plan" "test_func_usage_plan" {
  name        = lookup(var.usage_plan, "name")
  description = lookup(var.usage_plan, "description")
  api_stages {
    api_id = aws_api_gateway_rest_api.func_test_api.id
    stage  = aws_api_gateway_deployment.predictDeploy.stage_name
  }
  quota_settings {
    limit  = lookup(var.usage_plan, "quota_limit")
    period = lookup(var.usage_plan, "quota_period")
  }
  throttle_settings {
    burst_limit = lookup(var.usage_plan, "throttle_burst_limit")
    rate_limit  = lookup(var.usage_plan, "throttle_rate_limit")
  }
}

resource "aws_api_gateway_usage_plan_key" "main" {
  key_id        = aws_api_gateway_api_key.test_func_api_key.id
  key_type      = "API_KEY"
  usage_plan_id = aws_api_gateway_usage_plan.test_func_usage_plan.id
}