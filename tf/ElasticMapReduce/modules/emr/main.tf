resource "aws_emr_cluster" "cluster" {
    name = "emr-test"
    release_label = "emr-5.33.0"
    applications = ["Spark"]

    additional_info = <<EOF
{
  "instanceAwsClientConfiguration": {
    "proxyPort": 8099,
    "proxyHost": "myproxy.example.com"
  }
}
EOF

    termination_protection = false
    keep_job_flow_alive_when_no_steps = true

    
}