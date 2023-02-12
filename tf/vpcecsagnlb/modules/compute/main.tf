resource "aws_launch_configuration" "ecs_launch_config" {
  image_id             = "ami-070d0f1b66ccfd0fa"
  iam_instance_profile = var.iam_instance_profile_name
  security_groups      = var.vpc_sg_id
  user_data            = "#!/bin/bash\necho ECS_CLUSTER=${var.ecs_cluster_name} >> /etc/ecs/ecs.config"
  instance_type        = "t3.micro"
  root_block_device {
    volume_size = 30
  }
  associate_public_ip_address = false
}