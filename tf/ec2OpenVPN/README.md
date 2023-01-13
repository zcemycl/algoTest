### Options
1. London (eu-west-2, eu-west-2a, ami-035469b606478d63d)
2. Singapore (ap-southeast-1, ap-southeast-1a, ami-09f03fa5572692399)

### How to run? 
```
aws-vault exec leo.leung -- terraform apply -auto-approve -var-file="singapore.tfvars"
```

### References
1. [Install VPN (OpenVPN) Server on AWS EC2 Instance (Ubuntu)](https://dev.to/pimenvibritania/install-vpn-openvpn-server-on-aws-ec2-instance-ubuntu-50nf)
2. [Setting Up an OpenVPN Server on AWS EC2](https://mshields.name/blog/2022-02-26-setting-up-openvpn-server-on-aws-ec2/#selecting-an-ami)
3. [Using Terraform IAC to Deploy your free VPN server on AWS](https://lekansogunle.medium.com/using-terraform-iac-to-deploy-your-free-vpn-server-on-aws-933204316980)