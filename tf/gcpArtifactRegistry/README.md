```
gcloud services enable containerregistry.googleapis.com
gcloud services enable artifactregistry.googleapis.com
gcloud services enable iam.googleapis.com
terraform apply -auto-approve -var gcp_project=${PROJECT_ID}
gcloud auth configure-docker europe-west2-docker.pkg.dev
docker build -t europe-west2-docker.pkg.dev/${PROJECT_ID}/leotestgcr/${IMAGE}:latest .
docker push europe-west2-docker.pkg.dev/${PROJECT_ID}/leotestgcr/${IMAGE}:latest
```