resource "aws_vpc" "vpc" {
  cidr_block = "10.0.0.0/16"

  enable_dns_support   = true
  enable_dns_hostnames = true

  tags = {
    Name   = "${var.tag_author} -- ${var.tag_topic}"
    Author = var.tag_author
    Topic  = var.tag_topic
  }
}

resource "aws_internet_gateway" "igw" {
  vpc_id = aws_vpc.vpc.id

  tags = {
    Name   = "${var.tag_author} -- ${var.tag_topic}: Internet Gateway"
    Author = var.tag_author
    Topic  = var.tag_topic
  }
}

resource "aws_subnet" "private_subnet1" {
  vpc_id            = aws_vpc.vpc.id
  cidr_block        = "10.0.0.0/19"
  availability_zone = "${var.region}a"

  tags = {
    Author                                      = var.tag_author
    Topic                                       = var.tag_topic
    "Name"                                      = "private-${var.region}a"
    "kubernetes.io/role/internal-elb"           = "1"
    "kubernetes.io/cluster/${var.cluster_name}" = "owned"
  }
}

resource "aws_subnet" "private_subnet2" {
  vpc_id            = aws_vpc.vpc.id
  cidr_block        = "10.0.32.0/19"
  availability_zone = "${var.region}b"

  tags = {
    Author                                      = var.tag_author
    Topic                                       = var.tag_topic
    "Name"                                      = "private-${var.region}a"
    "kubernetes.io/role/internal-elb"           = "1"
    "kubernetes.io/cluster/${var.cluster_name}" = "owned"
  }
}

resource "aws_subnet" "public_subnet1" {
  vpc_id                  = aws_vpc.vpc.id
  cidr_block              = "10.0.64.0/19"
  availability_zone       = "${var.region}a"
  map_public_ip_on_launch = true

  tags = {
    Author                                      = var.tag_author
    Topic                                       = var.tag_topic
    "Name"                                      = "public-${var.region}a"
    "kubernetes.io/role/elb"                    = "1"
    "kubernetes.io/cluster/${var.cluster_name}" = "owned"
  }
}

resource "aws_subnet" "public_subnet2" {
  vpc_id                  = aws_vpc.vpc.id
  cidr_block              = "10.0.96.0/19"
  availability_zone       = "${var.region}b"
  map_public_ip_on_launch = true

  tags = {
    Author                                      = var.tag_author
    Topic                                       = var.tag_topic
    "Name"                                      = "public-${var.region}a"
    "kubernetes.io/role/elb"                    = "1"
    "kubernetes.io/cluster/${var.cluster_name}" = "owned"
  }
}

resource "aws_eip" "nat" {
  vpc = true

  tags = {
    Name   = "${var.tag_author} -- ${var.tag_topic}: Elastic IP"
    Author = var.tag_author
    Topic  = var.tag_topic
  }
}

resource "aws_nat_gateway" "nat" {
  allocation_id = aws_eip.nat.id
  subnet_id     = aws_subnet.public_subnet1.id

  tags = {
    Name   = "${var.tag_author} -- ${var.tag_topic}: Nat gateway"
    Author = var.tag_author
    Topic  = var.tag_topic
  }

  depends_on = [aws_internet_gateway.igw]

}

resource "aws_route_table" "private" {
  vpc_id = aws_vpc.vpc.id

  route {
    cidr_block = "0.0.0.0/0"
    gateway_id = aws_nat_gateway.nat.id
  }

  tags = {
    Name   = "${var.tag_author} -- ${var.tag_topic}: Private Route Table"
    Author = var.tag_author
    Topic  = var.tag_topic
  }
}

resource "aws_route_table" "public" {
  vpc_id = aws_vpc.vpc.id

  route {
    cidr_block = "0.0.0.0/0"
    gateway_id = aws_internet_gateway.igw.id
  }

  tags = {
    Name   = "${var.tag_author} -- ${var.tag_topic}: Public Route Table"
    Author = var.tag_author
    Topic  = var.tag_topic
  }
}

resource "aws_route_table_association" "private_subnet1" {
  subnet_id      = aws_subnet.private_subnet1.id
  route_table_id = aws_route_table.private.id
}

resource "aws_route_table_association" "public_subnet1" {
  subnet_id      = aws_subnet.public_subnet1.id
  route_table_id = aws_route_table.public.id
}

resource "aws_route_table_association" "private_subnet2" {
  subnet_id      = aws_subnet.private_subnet2.id
  route_table_id = aws_route_table.private.id
}

resource "aws_route_table_association" "public_subnet2" {
  subnet_id      = aws_subnet.public_subnet2.id
  route_table_id = aws_route_table.public.id
}