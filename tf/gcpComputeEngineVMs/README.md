```
gcloud init
gcloud services enable compute.googleapis.com
terraform init
terraform validate
ssh-keygen -t rsa
terraform apply -auto-approve -var gcp_project=${PROJECT_ID}
```