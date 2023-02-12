resource "aws_instance" "example" {
  ami               = lookup(var.ec2_config, "ami")
  availability_zone = lookup(var.ec2_config, "az")
  instance_type     = lookup(var.ec2_config, "type")
  security_groups   = [var.sg_name]
  key_name          = var.keypair_name

  root_block_device {
    volume_size = lookup(var.ec2_config, "root_volume_size")
    volume_type = lookup(var.ec2_config, "root_volume_type")
    # iops = "${lookup(var.ec2_config,"root_volume_iops")}"
  }

  provisioner "file" {
    source      = "bash/"
    destination = "/tmp/"
  }
  provisioner "remote-exec" {
    inline = [
      "export KUBERNETES_VERSION='1.22/stable'",
      "export CHANNEL='1.6/stable'",
      "sudo snap wait system seed.loaded",
      "for snap in juju juju-wait charmcraft; do sudo snap install $snap --classic; done",
      "sudo snap install microk8s --classic --channel=$KUBERNETES_VERSION",
      "sudo snap refresh charmcraft --channel latest/candidate",
      "sudo usermod -a -G microk8s ubuntu",
      "sudo su ubuntu <<EOF",
      "microk8s enable dns storage metallb:'10.64.140.43-10.64.140.49,192.168.0.105-192.168.0.111'",
      "alias kubectl='microk8s.kubectl'",
      "kubectl wait --for=condition=available -nkube-system deployment/coredns deployment/hostpath-provisioner",
      "kubectl -n kube-system rollout status ds/calico-node",
      "juju bootstrap microk8s uk8s-controller",
      "juju add-model kubeflow",
      "juju deploy kubeflow --channel=$CHANNEL --trust",
      "export USERNAME=\"user123@email.com\"",
      "export PASSWORD=\"user123\";",
      "juju config dex-auth public-url=http://10.64.140.43.nip.io",
      "juju config oidc-gatekeeper public-url=http://10.64.140.43.nip.io; ",
      "juju config dex-auth static-username=$USERNAME",
      "juju config dex-auth static-password=$PASSWORD",
      "juju run --unit istio-pilot/0 -- \"export JUJU_DISPATCH_PATH=hooks/config-changed; ./dispatch\"",
      "EOF",
      "exit 0"
    ]
  }

  connection {
    host        = self.public_ip
    user        = lookup(var.ec2_config, "user")
    private_key = file("${lookup(var.ec2_config, "private_key")}")
    timeout     = "10m"
  }
  provisioner "local-exec" {
    command = "echo ${aws_instance.example.id} >> info.txt"
  }
  provisioner "local-exec" {
    command = "echo ${aws_instance.example.public_ip} >> info.txt"
  }
  tags = {
    Name = "${lookup(var.ec2_config, "name")}"
  }
}

resource "null_resource" "kubeflow_setup" {
  connection {
    host        = aws_instance.example.public_ip
    user        = lookup(var.ec2_config, "user")
    private_key = file("${lookup(var.ec2_config, "private_key")}")
    timeout     = "10m"
  }
  provisioner "remote-exec" {
    inline = [
      "microk8s enable dns storage metallb:'10.64.140.43-10.64.140.49,192.168.0.105-192.168.0.111'",
      "alias kubectl='microk8s.kubectl'",
      "kubectl wait --for=condition=available -nkube-system deployment/coredns deployment/hostpath-provisioner",
      "kubectl -n kube-system rollout status ds/calico-node",
      "juju bootstrap microk8s uk8s-controller",
      "juju add-model kubeflow",
      "juju deploy kubeflow --channel=$CHANNEL --trust",
      "export USERNAME=\"user123@email.com\"",
      "export PASSWORD=\"user123\";",
      "juju config dex-auth public-url=http://10.64.140.43.nip.io",
      "juju config oidc-gatekeeper public-url=http://10.64.140.43.nip.io; ",
      "juju config dex-auth static-username=$USERNAME",
      "juju config dex-auth static-password=$PASSWORD",
      "juju run --unit istio-pilot/0 -- \"export JUJU_DISPATCH_PATH=hooks/config-changed; ./dispatch\"",
      "exit 0"
    ]
  }
}
