output "userPoolId" {
  value = module.cognito.userPoolId
}

output "clientId" {
  value = module.cognito.clientId
}

output "domain" {
  value = module.cognito.domain
}

output "ec2_ip" {
  value = module.ec2.ec2_public_ip
}

output "invoke_url" {
  value = module.apigw.gw_invoke_url
}