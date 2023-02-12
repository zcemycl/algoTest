resource "aws_lb" "application_load_balancer" {
  name               = "alb"
  internal           = false
  load_balancer_type = "application"
  subnets            = aws_subnet.pub_subnet.*.id
  security_groups    = [aws_security_group.load_balancer_security_group.id]

  provisioner "local-exec" {
    command = "echo ${aws_lb.application_load_balancer.dns_name} >> info.txt"
  }
}

resource "aws_lb_target_group" "target_group" {
  name        = "tg"
  port        = 80
  protocol    = "HTTP"
  target_type = "ip"
  vpc_id      = aws_vpc.vpc.id

  health_check {
    healthy_threshold   = "3"
    interval            = "300"
    protocol            = "HTTP"
    matcher             = "200"
    timeout             = "3"
    path                = "/v1/status"
    unhealthy_threshold = "2"
  }
}

resource "aws_lb_listener" "listener" {
  load_balancer_arn = aws_lb.application_load_balancer.id
  port              = "80"
  protocol          = "HTTP"

  default_action {
    type             = "forward"
    target_group_arn = aws_lb_target_group.target_group.id
  }
}
