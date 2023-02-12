resource "aws_ecs_task_definition" "dash_task" {
  family = "dash"
  container_definitions = jsonencode([
    {
      name        = "dash"
      image       = "${aws_ecr_repository.my_first_ecr_repo.repository_url}:latest"
      cpu         = 1
      memory      = 512
      essential   = true
      environment = []
      portMappings = [
        {
          containerPort = 8050
          hostPort      = 8050
          protocol      = "tcp"
        }
      ]
    }
  ])
  requires_compatibilities = ["EC2"]
  network_mode             = "awsvpc"
  memory                   = 512
  cpu                      = 512
  execution_role_arn       = aws_iam_role.ecsTaskExecutionRole.arn
  task_role_arn            = aws_iam_role.ecsTaskExecutionRole.arn
  depends_on = [
    null_resource.push_docker_image
  ]
}

resource "aws_ecs_service" "dash_service" {
  name            = "dash-service"
  launch_type     = "EC2"
  cluster         = aws_ecs_cluster.dash_cluster.id
  task_definition = aws_ecs_task_definition.dash_task.arn
  desired_count   = 2
  network_configuration {
    subnets          = aws_subnet.pub_subnet.*.id
    assign_public_ip = false
    security_groups = [
      aws_security_group.service_security_group.id,
      aws_security_group.load_balancer_security_group.id
    ]
  }

  load_balancer {
    target_group_arn = aws_lb_target_group.target_group.arn
    container_name   = "dash"
    container_port   = 8050
  }

  depends_on = [aws_lb_listener.listener]
}

resource "aws_ecs_cluster" "dash_cluster" {
  name = "dash-cluster"
}
