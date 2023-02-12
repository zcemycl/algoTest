resource "aws_key_pair" "example_key" {
  key_name   = lookup(var.ec2_config, "key_name")
  public_key = file("${lookup(var.ec2_config, "public_key")}")
}