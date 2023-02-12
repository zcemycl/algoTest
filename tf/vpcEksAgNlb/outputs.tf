# ecr
output "ecr_token" {
  value = module.ecr.ecr_token
}

# apigw
output "invoke_url" {
  value = module.apigw.gw_invoke_url
}

# lb listener arn
output "lb_listener_arn" {
  value = data.external.get_lb_listener_arn.result.listenerarn
}