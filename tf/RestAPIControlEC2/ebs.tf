resource "aws_ebs_volume" "example_ebs" {
  availability_zone    = lookup(var.ebs_config, "az")
  size                 = lookup(var.ebs_config, "size")
  iops                 = lookup(var.ebs_config, "iops")
  type                 = lookup(var.ebs_config, "type")
  multi_attach_enabled = lookup(var.ebs_config, "multi_attach_enabled")
}

resource "aws_volume_attachment" "ebs_att" {
  device_name = "/dev/sdh"
  volume_id   = aws_ebs_volume.example_ebs.id
  instance_id = aws_instance.example.id
}