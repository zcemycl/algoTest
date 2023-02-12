resource "aws_iam_role" "example" {
  name = "example"

  assume_role_policy = <<EOF
{
    "Version": "2012-10-17",
    "Statement": [
    {
        "Effect": "Allow",
        "Principal": {
        "Service": "codebuild.amazonaws.com"
        },
        "Action": "sts:AssumeRole"
    }
    ]
}
EOF
}

resource "aws_iam_role_policy" "example" {
  role = aws_iam_role.example.name

  policy = <<POLICY
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Effect": "Allow",
      "Resource": [
        "*"
      ],
      "Action": [
        "logs:CreateLogGroup",
        "logs:CreateLogStream",
        "logs:PutLogEvents"
      ]
    },
    {
      "Action": [
       "s3:PutObject",
       "s3:GetObject",
       "s3:GetObjectVersion",
       "s3:GetBucketVersioning"
      ],
      "Resource": [
        "*"
      ],
      "Effect": "Allow"
    },
    {
      "Effect": "Allow",
      "Resource": [
        "*"
      ],
      "Action": [
        "codebuild:*"
      ]
    }
  ]
}
POLICY
}


resource "aws_codebuild_project" "leo_test_build" {
  name          = "leoTestBuild"
  description   = "Test Codebuild..."
  build_timeout = "5"
  service_role  = aws_iam_role.example.arn

  source {
    type            = "CODECOMMIT"
    location        = aws_codecommit_repository.leo_test_repo.clone_url_http
    git_clone_depth = 1
    buildspec       = file("config/buildspec.yml")

    git_submodules_config {
      fetch_submodules = true
    }

  }

  source_version = "refs/heads/master"
  # source {
  #     type = "CODEPIPELINE"
  #     buildspec = "${file("config/buildspec.yml")}"
  # }

  environment {
    compute_type = "BUILD_GENERAL1_SMALL"
    image        = "aws/codebuild/standard:5.0"
    type         = "LINUX_CONTAINER"
  }

  # artifacts {
  #     type = "CODEPIPELINE"
  # }

  artifacts {
    type = "NO_ARTIFACTS"
  }

  logs_config {
    cloudwatch_logs {
      group_name  = "log-group"
      stream_name = "log-stream"
    }
  }

  depends_on = [
    aws_codecommit_repository.leo_test_repo
  ]

}