output "sg_lb_id" {
  value = aws_security_group.sg_lb.id
}

output "sg_ecs_id" {
  value = aws_security_group.sg_ecs.id
}