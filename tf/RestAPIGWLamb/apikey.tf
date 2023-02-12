resource "aws_api_gateway_api_key" "test_func_api_key" {
  name = "testFuncAPI"
  provisioner "local-exec" {
    command = "echo ${aws_api_gateway_api_key.test_func_api_key.value} >> apikey.txt"
  }
}

