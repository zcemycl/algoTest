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
  value = module.apigw.gw_invoke_url
}