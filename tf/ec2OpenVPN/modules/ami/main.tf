resource "aws_ami_from_instance" "example" {
  name               = var.ami_name
  source_instance_id = var.src_instance_id
}