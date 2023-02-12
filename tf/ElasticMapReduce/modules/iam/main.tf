# IAM role for EMR
data "aws_iam_policy_document" "emr_assume_role" {
  statement {
    effect = "Allow"

    principals {
      type        = "Service"
      identifiers = ["elasticmapreduce.amazonaws.com"]
    }

    actions = ["sts:AssumeRole"]
  }
}

resource "aws_iam_role" "emr_service_role" {
  name               = "EMR_ServiceRole"
  assume_role_policy = data.aws_iam_policy_document.emr_assume_role.json
}

resource "aws_iam_role_policy_attachment" "emr_service_role" {
  role       = aws_iam_role.emr_service_role.name
  policy_arn = "arn:aws:iam::aws:policy/service-role/AmazonElasticMapReduceRole"
}

# IAM role for autoscaling
data "aws_iam_policy_document" "emr_autoscaling_role_policy" {
  statement {
    effect = "Allow"

    principals {
      type        = "Service"
      identifiers = ["elasticmapreduce.amazonaws.com", "application-autoscaling.amazonaws.com"]
    }

    actions = ["sts:AssumeRole"]
  }

}

resource "aws_iam_role" "emr_autoscaling_role" {
  name               = "EMR_AutoScalingRole"
  assume_role_policy = data.aws_iam_policy_document.emr_autoscaling_role_policy.json
}

resource "aws_iam_role_policy_attachment" "emr_autoscaling_role" {
  role       = aws_iam_role.emr_autoscaling_role.name
  policy_arn = "arn:aws:iam::aws:policy/service-role/AmazonElasticMapReduceforAutoScalingRole"
}

# IAM role for EC2
data "aws_iam_policy_document" "ec2_assume_role" {
  statement {
    effect = "Allow"

    principals {
      type        = "Service"
      identifiers = ["ec2.amazonaws.com"]
    }

    actions = ["sts:AssumeRole"]
  }
}

resource "aws_iam_role" "emr_ec2_instance_profile" {
  name               = "EC2_InstanceProfile"
  assume_role_policy = data.aws_iam_policy_document.ec2_assume_role.json
}

resource "aws_iam_role_policy_attachment" "emr_ec2_instance_profile" {
  role       = aws_iam_role.emr_ec2_instance_profile.name
  policy_arn = "arn:aws:iam::aws:policy/service-role/AmazonElasticMapReduceforEC2Role"
}

resource "aws_iam_instance_profile" "emr_ec2_instance_profile" {
  name = aws_iam_role.emr_ec2_instance_profile.name
  role = aws_iam_role.emr_ec2_instance_profile.name
}

# s3 policy ?master and slave
# master
resource "aws_iam_policy" "user1_policy" {
  name        = "user1_iam_policy"
  description = "A test policy"

  policy = <<EOF
{
    "Version": "2012-10-17",
    "Statement": [
        {
            "Action": [
                "s3:AbortMultipartUpload",
                "s3:Get*",
                "s3:List*",
                "s3:Delete*",
                "s3:PutObject"
            ],
            "Effect": "Allow",
            "Resource": "*"
        }
    ]
}
EOF
}

# slave?
resource "aws_iam_policy" "user2_policy" {
  name        = "user2_iam_policy"
  description = "A test policy"

  policy = <<EOF
{
    "Version": "2012-10-17",
    "Statement": [
        {
            "Action": [
                "s3:Get*",
                "s3:List*"
            ],
            "Effect": "Allow",
            "Resource": "*"
        }
    ]
}
EOF
}

resource "aws_iam_user_policy_attachment" "s3_bucket_for_iam_attach_user1" {
  user       = aws_iam_user.new_user[0].name
  policy_arn = "arn:aws:iam::aws:policy/service-role/AmazonElasticMapReduceRole"
  depends_on = [
    aws_iam_user.new_user
  ]
}

resource "aws_iam_user_policy_attachment" "s3_bucket_for_iam_attach_user2" {
  user       = aws_iam_user.new_user[1].name
  policy_arn = "arn:aws:iam::aws:policy/service-role/AmazonElasticMapReduceforAutoScalingRole"
  depends_on = [
    aws_iam_user.new_user
  ]
}

resource "aws_iam_user_policy_attachment" "s3_bucket_for_iam_attach_user3" {
  user       = aws_iam_user.new_user[0].name
  policy_arn = aws_iam_policy.user1_policy.arn
  depends_on = [
    aws_iam_user.new_user
  ]
}

resource "aws_iam_user_policy_attachment" "s3_bucket_for_iam_attach_user4" {
  user       = aws_iam_user.new_user[1].name
  policy_arn = aws_iam_policy.user2_policy.arn
  depends_on = [
    aws_iam_user.new_user
  ]
}

resource "aws_iam_user" "new_user" {
  count = length(var.iam_name)
  name  = var.iam_name[count.index]
}