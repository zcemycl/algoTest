output "lb_listener_arn" {
  value = aws_lb_listener.lbl.arn
}

output "lb_target_group_arn" {
  value = aws_lb_target_group.lbtg.arn
}