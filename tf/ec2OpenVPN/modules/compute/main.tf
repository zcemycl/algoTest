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
      "sudo apt update",
      "sudo apt-get update",
      "curl -O https://raw.githubusercontent.com/angristan/openvpn-install/master/openvpn-install.sh",
      "chmod +x openvpn-install.sh",
      # "APPROVE_INSTALL=y ENDPOINT=$(curl -4 ifconfig.co) APPROVE_IP=y IPV6_SUPPORT=n PORT_CHOICE=1 PROTOCOL_CHOICE=1 DNS=1 COMPRESSION_ENABLED=n  CUSTOMIZE_ENC=n CLIENT=david PASS=1 ./openvpn-install.sh ",
      # "sudo AUTO_INSTALL=y ./openvpn-install.sh"
    ]
  }

  connection {
    host        = aws_instance.example.public_ip
    user        = var.user
    private_key = file(var.private_key)
    timeout     = "10m"
  }
}
