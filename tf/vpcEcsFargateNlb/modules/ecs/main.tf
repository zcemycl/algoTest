resource "aws_ecs_task_definition" "task" {
  family = "task"
  container_definitions = jsonencode([
    {
      name        = var.container_name
      image       = "${var.ecr_repo_url}:latest"
      essential   = true
      environment = []
      portMappings = [
        {
          containerPort = 8080
          # hostPort = 8080
          protocol = "tcp"
        }
      ]
    }
  ])
  requires_compatibilities = ["FARGATE"]
  network_mode             = "awsvpc"
  cpu                      = 512
  memory                   = 1024
  execution_role_arn       = var.ecs_task_execution_role_arn
  task_role_arn            = var.ecs_task_execution_role_arn
}

resource "aws_ecs_cluster" "cluster" {
  name = var.ecs_cluster_name
}


resource "aws_ecs_service" "service" {
  name            = "service"
  launch_type     = "FARGATE"
  cluster         = aws_ecs_cluster.cluster.id
  task_definition = aws_ecs_task_definition.task.arn
  desired_count   = 3
  network_configuration {
    subnets          = var.subnets
    assign_public_ip = false
    security_groups  = var.security_groups
  }

  load_balancer {
    target_group_arn = var.lb_target_group_arn
    container_name   = var.container_name
    container_port   = 8080
  }
}

