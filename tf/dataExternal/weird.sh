#!/bin/bash
jq -n --arg username $(echo "hello") '{"username": $username}'
