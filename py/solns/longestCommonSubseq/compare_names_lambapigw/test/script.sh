#!/bin/bash
aws-vault exec llls -- aws lambda invoke --region=eu-west-2 --function-name=func_test --payload file://event.json response.json