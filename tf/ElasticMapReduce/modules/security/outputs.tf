output "sg_slave_id" {
  value = aws_security_group.emr_slave.id
}

output "sg_master_id" {
  value = aws_security_group.emr_master.id
}