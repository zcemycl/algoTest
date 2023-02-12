output "apikey" {
  value     = aws_api_gateway_api_key.test_func_api_key.value
  sensitive = true
}

output "base_url" {
  value = aws_api_gateway_deployment.predictDeploy.invoke_url
}