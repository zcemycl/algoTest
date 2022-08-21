# data "aws_ecs_container_definition" "dash_container" {
#     task_definition = aws_ecs_task_definition.dash_task.id
#     container_name = "dash container"
#     image = "${aws_ecr_repository.my_first_ecr_repo.repository_url}:latest"
# }

resource "aws_ecs_task_definition" "dash_task" {
    family = "dash"
    container_definitions = jsonencode([
        {
            name = "dash"
            image = "${aws_ecr_repository.my_first_ecr_repo.repository_url}:latest"
            cpu = 1
            memory = 512
            essential = true
            environment = []
            portMappings = [
                {
                    containerPort = 8050
                    hostPort = 8888
                }
            ]
        }
    ])
    requires_compatibilities = ["EC2"]
    memory = 512
    cpu = 512
    execution_role_arn       = "${aws_iam_role.ecsTaskExecutionRole.arn}"
    depends_on = [
        null_resource.push_docker_image
    ]
}

resource "aws_ecs_service" "dash_service" {
    name            = "dash-service"
    launch_type = "EC2"
    cluster         = aws_ecs_cluster.dash_cluster.id
    task_definition = aws_ecs_task_definition.dash_task.arn
    desired_count   = 2
}

resource "aws_ecs_cluster" "dash_cluster" {
    name = "dash-cluster"
}


resource "aws_iam_role" "ecsTaskExecutionRole" {
  name               = "ecsTaskExecutionRole_new"
  assume_role_policy = "${data.aws_iam_policy_document.assume_role_policy.json}"
}

data "aws_iam_policy_document" "assume_role_policy" {
  statement {
    actions = ["sts:AssumeRole"]

    principals {
      type        = "Service"
      identifiers = ["ecs-tasks.amazonaws.com"]
    }
  }
}

resource "aws_iam_role_policy_attachment" "ecsTaskExecutionRole_policy" {
  role       = "${aws_iam_role.ecsTaskExecutionRole.name}"
  policy_arn = "arn:aws:iam::aws:policy/service-role/AmazonECSTaskExecutionRolePolicy"
}
