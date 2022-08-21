### Notes
1. testing with dockerfile.
```
docker build -t dash -f install/Dockerfile.dev .
docker run -dp 8050:8050 dash # http://0.0.0.0:8050
```
2. terraform to create ecr
```
aws-vault exec xxx --no-session -- terraform init
aws-vault exec xxx --no-session -- terraform apply -auto-approve
```
3. upload image to ecr
```
aws-vault exec xxx -- aws ecr get-login-password --region {var.AWS_REGION} | docker login --username AWS --password-stdin {aws_ecr_repository.my_first_ecr_repo.registry_id}.dkr.ecr.{var.AWS_REGION}.amazonaws.com
docker tag dash:latest {aws_ecr_repository.my_first_ecr_repo.repository_url}:latest
docker push {aws_ecr_repository.my_first_ecr_repo.repository_url}:latest
```
4. create ecs cluster (ec2 linux + networking: cluster, asg, subnets, vpc)
5. create ecs task (ec2)
6. Link task to cluster
7. Change the ec2 sg with 8888 ingress
8. Browse public dns address