output "func_name" {
  value = aws_lambda_function.test_lambda.function_name
}

output "func_invoke_arn" {
  value = aws_lambda_function.test_lambda.invoke_arn
}