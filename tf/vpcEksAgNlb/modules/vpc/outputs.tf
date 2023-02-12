output "vpc_id" {
  value = aws_vpc.vpc.id
}

output "public_subnet1_id" {
  value = aws_subnet.public_subnet1.id
}

output "private_subnet1_id" {
  value = aws_subnet.private_subnet1.id
}

output "public_subnet2_id" {
  value = aws_subnet.public_subnet2.id
}

output "private_subnet2_id" {
  value = aws_subnet.private_subnet2.id
}


output "vpc_cidr_block" {
  value = aws_vpc.vpc.cidr_block
}