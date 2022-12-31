### Must install tfenv in MacOS
1. Install tfenv.
```
brew install tfenv
```
2. Clone the repo.
```
git clone https://github.com/tfutils/tfenv.git ~/.tfenv
```
3. Update the PATH.
```
echo ‘export PATH=”$HOME/.tfenv/bin:$PATH”‘ >> ~/.zprofile
```
4. Install terraform via tfenv.
```
tfenv install 1.2.7
tfenv use 1.2.7
```

### How to run?
1. Clone the repo.
```
git clone https://github.com/awslabs/kubeflow-manifests.git
cd kubeflow-manifests/deployments/rds-s3/terraform
```
2. Export the environmental variables.
```
# Region to create the cluster in
export CLUSTER_REGION=eu-west-2
# Name of the cluster to create
export CLUSTER_NAME=leotestEKS_Kubeflow
# AWS access key id of the static credentials used to authenticate the Minio Client
export TF_VAR_minio_aws_access_key_id=
# AWS secret access key of the static credentials used to authenticate the Minio Client
export TF_VAR_minio_aws_secret_access_key=
# true/false flag to configure and deploy with RDS
export USE_RDS="true"
# true/false flag to configure and deploy with S3
export USE_S3="true"
```
3. Edit `.tfvars` file. 
```
cat <<EOF > sample.auto.tfvars
cluster_name="${CLUSTER_NAME}"
cluster_region="${CLUSTER_REGION}"
generate_db_password="true"
use_rds="${USE_RDS}"
use_s3="${USE_S3}"

# The below values are set to make cleanup easier but are not recommended for production
deletion_protection="false"
secret_recovery_window_in_days="0"
force_destroy_s3_bucket="true"
EOF

cp sample.auto.tfvars .tfvars
```
4. Initialise and plan. 
```
# Make sure installing 1.2.7 terraform
aws-vault exec {} -- terraform init 
aws-vault exec {} -- terraform plan
```
5. Build `Makefile`.
```
aws-vault exec {} --no-session -- make deploy
```
6. Connect to Kubeflow Dashboard.
```
cd ../../..
make port-forward
# Navigate to your browser http://localhost:8080/
```

### References
1. [Documentation/Deployment Options/RDS and S3/Terraform Deployment Guide](https://awslabs.github.io/kubeflow-manifests/docs/deployment/rds-s3/guide-terraform/)
2. [How to Upgrade Terraform to the Latest Version](https://spacelift.io/blog/terraform-version-upgrade)