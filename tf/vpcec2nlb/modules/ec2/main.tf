resource "aws_instance" "ec2" {
  ami           = "ami-071f6f7c386495dc0"
  instance_type = "t2.micro"
  # key_name = "devops"
  subnet_id = var.subnet_id

  associate_public_ip_address = false
  vpc_security_group_ids      = var.vpc_sg_id

  user_data = <<EOF
#!/bin/bash
sudo apt-get update -y
sudo apt-get -y install nginx-light
sudo apt install python3-pip -y
pip3 install uvicorn fastapi urllib3
sudo wget https://raw.githubusercontent.com/zcemycl/algoTest/main/tf/vpcec2/src/main.py
tmux new -d 'python3 main.py'
EOF

  tags = {
    Name   = "${var.tag_author} -- ${var.tag_topic}: Compute"
    Author = var.tag_author
    Topic  = var.tag_topic
  }
}
