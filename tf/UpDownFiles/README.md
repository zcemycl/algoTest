### Notes
1. testing with dockerfile.
```
# http://0.0.0.0:8050
# prod
docker build -t dash-prod -f install/Dockerfile.prod .
docker run -dp 8050:8050 dash-prod 
# dev
docker build -t dash-dev -f install/Dockerfile.dev .
docker run -p 8050:8050 -v $(pwd)/client/app.py:/app.py dash-dev
# get into running image
docker exec -it xxxxx bash
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

### Useful commands
```
docker build -t dash-client-dev -f client/Dockerfile.dev client
docker run -p 8050:8050 -v $(pwd)/client/app.py:/app.py dash-client-dev
docker build -t dash-server-dev -f server/Dockerfile.server.dev server
docker run -p 5000:5000 -v $(pwd)/server/app.py:/app.py dash-server-dev
docker logs --follow dask-xxxx-dev
### latest
docker compose -f docker-compose.dev.yml up
```


### References
1. [Deploying Django to AWS ECS with Terraform](https://testdriven.io/blog/deploying-django-to-ecs-with-terraform/)
2. [How to use Docker to deploy a Dashboard app on AWS](https://towardsdatascience.com/how-to-use-docker-to-deploy-a-dashboard-app-on-aws-8df5fb322708)
3. [How to Deploy a Dockerised Application on AWS ECS With Terraform](https://medium.com/avmconsulting-blog/how-to-deploy-a-dockerised-node-js-application-on-aws-ecs-with-terraform-3e6bceb48785)
4. [Deploying an AWS ECS Cluster of EC2 Instances With Terraform](https://medium.com/swlh/creating-an-aws-ecs-cluster-of-ec2-instances-with-terraform-85a10b5cfbe3)
5. [How to Deploy a Docker App to AWS using Elastic Container Service (ECS)](https://www.youtube.com/watch?v=zs3tyVgiBQQ&t=157s)
6. [Managing Amazon ECS Using Terraform](https://hands-on.cloud/managing-amazon-ecs-using-terraform/)
7. [Create an AWS ECS Cluster Using Terraform ](https://dev.to/thnery/create-an-aws-ecs-cluster-using-terraform-g80)