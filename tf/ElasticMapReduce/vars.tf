variable "region" {
    default = "eu-west-2"
}

variable "s3_buckets_names" {
    default = ["emr_uploads", "emr_outputs"]
}

variable "name" {
    default = "leotestemr"
}

variable "iam_name" {
    default = ["master node", "slave node"]
}