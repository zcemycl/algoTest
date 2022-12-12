resource "aws_instance" "example" {
    ami = "${lookup(var.ec2_config,"ami")}"
    availability_zone = "${lookup(var.ec2_config,"az")}"
    instance_type = "${lookup(var.ec2_config,"type")}"
    security_groups = [var.sg_name]
    key_name = "${var.keypair_name}"

    root_block_device {
        volume_size = "${lookup(var.ec2_config,"root_volume_size")}" 
        volume_type = "${lookup(var.ec2_config,"root_volume_type")}"
        # iops = "${lookup(var.ec2_config,"root_volume_iops")}"
    }

    provisioner "file" {
        source      = "bash/"
        destination = "/tmp/"
    }
    provisioner "remote-exec"{
        inline = [
            "chmod +x /tmp/setup.sh",
            "source /tmp/setup.sh"
        ]
    }

    connection {
        host = self.public_ip
        user = "${lookup(var.ec2_config,"user")}"
        private_key = "${file("${lookup(var.ec2_config,"private_key")}")}"
        timeout = "10m"
    }
    provisioner "local-exec"{
        command = "echo ${aws_instance.example.id} >> info.txt"
    }
    provisioner "local-exec"{
        command = "echo ${aws_instance.example.public_ip} >> info.txt"
    }
    tags = {
        Name = "${lookup(var.ec2_config,"name")}"
    }
}

