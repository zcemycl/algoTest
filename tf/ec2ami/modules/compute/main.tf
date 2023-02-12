resource "aws_instance" "example" {
  ami               = var.ami
  availability_zone = var.availability_zone
  instance_type     = var.instance_type
  security_groups   = [var.sg_name]
  key_name          = var.keypair_name

  root_block_device {
    volume_size = var.root_volume_size
    volume_type = var.root_volume_type
    # iops = "${lookup(var.ec2_config,"root_volume_iops")}"
  }

  provisioner "local-exec" {
    command = "echo ${aws_instance.example.id} >> info.txt"
  }
  provisioner "local-exec" {
    command = "echo ${aws_instance.example.public_ip} >> info.txt"
  }
  tags = {
    Name = var.instance_tag
  }
}

resource "null_resource" "before_ami" {
  count = var.is_before_ami ? 1 : 0

  provisioner "remote-exec" {
    inline = [
      "sudo apt-get update -y",
      "sudo apt-get -y install nginx-light",
      "sudo systemctl restart nginx",
      "cd /var/www/html",
      "sudo wget http://mytestwebsitejack.s3-website-us-west-1.amazonaws.com/"
    ]
  }

  connection {
    host        = aws_instance.example.public_ip
    user        = var.user
    private_key = file(var.private_key)
    timeout     = "10m"
  }
}
