#!/bin/bash
jq -n --arg token $(aws ecr get-login-password --region eu-west-2) '{"token": $token}'
