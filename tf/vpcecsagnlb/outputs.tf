# ecr
output "ecr_repo_url" {
  value = module.ecr.ecr_repo_url
}

# cognito
output "userPoolId" {
  value = module.cognito.userPoolId
}

output "clientId" {
  value = module.cognito.clientId
}

output "domain" {
  value = module.cognito.domain
}

# apigw
output "invoke_url" {
  value = module.apigw.gw_invoke_url
}