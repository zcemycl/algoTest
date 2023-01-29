output "userPoolId" {
    value = module.cognito.userPoolId
}

output "clientId" {
    value = module.cognito.clientId
}

output "domain" {
    value = module.cognito.domain
}

output "invoke_url" {
    value = aws_apigatewayv2_stage.apigw_stage.invoke_url
}