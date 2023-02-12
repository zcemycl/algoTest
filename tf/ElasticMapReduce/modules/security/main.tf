resource "aws_security_group" "emr_master" {
  name                   = "sg_EMR_master"
  description            = "Security group for EMR"
  revoke_rules_on_delete = true

  ingress {
    from_port        = 22
    to_port          = 22
    protocol         = "tcp"
    cidr_blocks      = ["0.0.0.0/0"]
    ipv6_cidr_blocks = ["::/0"]
  }

  # ingress {
  #     from_port = 4040
  #     to_port = 4040
  #     protocol = "tcp"
  #     cidr_blocks = ["0.0.0.0/0"]
  #     ipv6_cidr_blocks = ["::/0"]
  # }

  # ingress {
  #     from_port = 8888
  #     to_port = 8888
  #     protocol = "tcp"
  #     cidr_blocks = ["0.0.0.0/0"]
  #     ipv6_cidr_blocks = ["::/0"]
  # }

  # ingress {
  #     from_port = 20888
  #     to_port = 20888
  #     protocol = "tcp"
  #     cidr_blocks = ["0.0.0.0/0"]
  #     ipv6_cidr_blocks = ["::/0"]
  # }

  egress {
    from_port        = 0
    to_port          = 0
    protocol         = "-1"
    cidr_blocks      = ["0.0.0.0/0"]
    ipv6_cidr_blocks = ["::/0"]
  }
}

resource "aws_security_group" "emr_slave" {
  name                   = "sg_EMR_slave"
  description            = "Security group for EMR slave"
  revoke_rules_on_delete = true

  ingress {
    from_port        = 22
    to_port          = 22
    protocol         = "tcp"
    cidr_blocks      = ["0.0.0.0/0"]
    ipv6_cidr_blocks = ["::/0"]
  }

  egress {
    from_port        = 0
    to_port          = 0
    protocol         = "-1"
    cidr_blocks      = ["0.0.0.0/0"]
    ipv6_cidr_blocks = ["::/0"]
  }

}