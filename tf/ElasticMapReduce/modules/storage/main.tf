resource "aws_s3_bucket" "this" {
  count  = length(var.s3_buckets_names)
  bucket = var.s3_buckets_names[count.index]
  # acl = "private"
  force_destroy = true
}

resource "aws_s3_bucket_acl" "this_acl" {
  count  = length(var.s3_buckets_names)
  bucket = aws_s3_bucket.this[count.index].id
  acl    = "private"
}