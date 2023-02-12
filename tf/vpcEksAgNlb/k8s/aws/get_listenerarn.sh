#!/bin/bash
domain="$(kubectl get service fastapi-svc -o jsonpath="{.status.loadBalancer.ingress[].hostname}")"
lbarn="$(aws elbv2 describe-load-balancers --region eu-west-2 --query "LoadBalancers[?contains(DNSName, '$domain')].LoadBalancerArn" --output text)"
listenerarn="$(aws elbv2 describe-listeners --load-balancer-arn $lbarn --region eu-west-2 --query "Listeners[0].ListenerArn" --output text)"
jq -n --arg listenerarn $listenerarn '{"listenerarn": $listenerarn}'
