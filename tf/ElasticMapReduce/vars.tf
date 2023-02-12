variable "region" {
  default = "eu-west-2"
}

variable "s3_buckets_names" {
  default = ["emr-uploads"]
}

variable "name" {
  default = "leotestemr"
}

variable "iam_name" {
  default = ["master_node", "slave_node"]
}