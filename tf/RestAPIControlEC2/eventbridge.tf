resource "aws_cloudwatch_event_rule" "on_lambda_rule" {
  name                = "on-lambda-event-rule"
  description         = "on every 10:00 am"
  schedule_expression = "cron(0 10 ? * MON-FRI *)"
}

resource "aws_cloudwatch_event_target" "on_lambda_target" {
  target_id = aws_lambda_function.test_lambda.id
  arn       = aws_lambda_function.test_lambda.arn
  rule      = aws_cloudwatch_event_rule.on_lambda_rule.name
  input     = <<JSON
        {
            "queryStringParameters": {
                "instanceId": "${aws_instance.example.id}",
                "action": "start"
            }
        }
    JSON
}

resource "aws_lambda_permission" "allow_cloudwatch2lambda" {
  statement_id  = "AllowExecutionFromCloudWatch"
  action        = "lambda:InvokeFunction"
  function_name = aws_lambda_function.test_lambda.function_name
  principal     = "events.amazonaws.com"
  source_arn    = aws_cloudwatch_event_rule.on_lambda_rule.arn
}