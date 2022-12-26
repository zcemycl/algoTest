output "sg_slave_name" {
    value = aws_security_group.emr_slave.name
}

output "sg_master_name" {
    value = aws_security_group.emr_master.name
}