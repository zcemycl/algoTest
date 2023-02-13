variable "AWS_REGION" {
  default = "eu-west-2"
}

variable "tag_author" {
  default = "Leo Leung"
}

variable "tag_topic" {
  default = "Learning and Testing"
}

# eks
variable "cluster_name" {
  default = "leo-demo"
}

variable "cluster_version" {
  default = "1.22"
}

# ecr
variable "ecr_name" {
  default = "ecr-test-leo"
}

variable "ecr_force_delete" {
  default = true
}

variable "local_image_name" {
  default = "fastapi-trial"
}