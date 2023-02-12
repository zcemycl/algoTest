resource "aws_key_pair" "example_key" {
  key_name   = var.key_name
  public_key = file(var.public_key)
}

resource "aws_instance" "ec2" {
  ami           = "ami-071f6f7c386495dc0"
  instance_type = "t2.micro"
  key_name      = var.private_key
  subnet_id     = var.subnet_id

  associate_public_ip_address = true
  vpc_security_group_ids      = var.vpc_sg_id

  tags = {
    Name   = "${var.tag_author} -- ${var.tag_topic}: Compute"
    Author = var.tag_author
    Topic  = var.tag_topic
  }
}

resource "null_resource" "setup_ec2" {
  provisioner "file" {
    source      = "./src/main.py"
    destination = "/tmp/main.py"
  }

  provisioner "remote-exec" {
    inline = [
      "sudo apt-get update -y",
      "sudo apt-get -y install nginx-light",
      "sudo apt install python3-pip -y",
      "pip3 install uvicorn fastapi urllib3",
      "tmux new -d 'python3 /tmp/main.py'"
    ]
  }

  connection {
    host        = aws_instance.ec2.public_ip
    user        = var.user
    private_key = file(var.private_key)
    timeout     = "10m"
  }
}