output "userPoolId" {
  value = aws_cognito_user_pool.pool.id
}

output "clientId" {
  value = aws_cognito_user_pool_client.client.id
}

output "domain" {
  value = "https://${var.user_pool_domain}.auth.${var.AWS_REGION}.amazoncognito.com"
}

output "endpoint" {
  value = aws_cognito_user_pool.pool.endpoint
}