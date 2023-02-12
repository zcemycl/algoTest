resource "aws_api_gateway_api_key" "test_func_api_key" {
  name = lookup(var.usage_plan, "apikey_name")
  provisioner "local-exec" {
    command = "echo ${aws_api_gateway_api_key.test_func_api_key.value} >> info.txt"
  }
}

output "apikey" {
  value     = aws_api_gateway_api_key.test_func_api_key.value
  sensitive = true
}