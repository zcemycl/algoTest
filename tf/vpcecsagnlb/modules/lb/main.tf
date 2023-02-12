resource "aws_lb" "lb" {
  name               = "load-balancer"
  internal           = true
  load_balancer_type = "network"
  subnets = [
    var.private_subnet1_id
  ]
}

resource "aws_lb_target_group" "lbtg" {
  name        = "load-balancer-target-group"
  port        = 8080
  protocol    = "TCP"
  vpc_id      = var.vpc_id
  target_type = "ip"

  health_check {
    enabled  = true
    protocol = "HTTP"
    path     = "/"
  }
}

resource "aws_lb_listener" "lbl" {
  load_balancer_arn = aws_lb.lb.arn
  port              = "8080"
  protocol          = "TCP"

  default_action {
    type             = "forward"
    target_group_arn = aws_lb_target_group.lbtg.arn
  }
}