resource "aws_instance" "example" {
  ami               = lookup(var.ec2_config, "ami")
  availability_zone = lookup(var.ec2_config, "az")
  instance_type     = lookup(var.ec2_config, "type")
  security_groups   = [aws_security_group.example_sg.name]
  key_name          = aws_key_pair.example_key.key_name

  root_block_device {
    volume_size = lookup(var.ec2_config, "root_volume_size")
    volume_type = lookup(var.ec2_config, "root_volume_type")
    iops        = lookup(var.ec2_config, "root_volume_iops")
  }

  provisioner "file" {
    source      = "bash/"
    destination = "/tmp/"
  }
  provisioner "remote-exec" {
    inline = [
      "find /tmp/ -type f -iname '*.sh' -exec chmod +x {} \\;",
      "mv /tmp/*.sh ~",
      "./setup1.sh"
    ]
  }
  provisioner "remote-exec" {
    inline = [
      "./setup2.sh"
    ]
  }
  provisioner "remote-exec" {
    inline = [
      "./setup3.sh"
    ]
  }
  connection {
    host        = self.public_ip
    user        = lookup(var.ec2_config, "user")
    private_key = file("${lookup(var.ec2_config, "private_key")}")
    timeout     = "10m"
  }
  provisioner "local-exec" {
    command = "echo ${aws_instance.example.id} >> info.txt"
  }
  provisioner "local-exec" {
    command = "echo ${aws_instance.example.public_ip} >> info.txt"
  }
  tags = {
    Name = "${lookup(var.ec2_config, "name")}"
  }
}
