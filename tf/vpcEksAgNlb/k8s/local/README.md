### How to run?
1. Create deployment. 
    ```
    kubectl apply -f deploy.yaml 
    # check
    kubectl get pods -l app=fastapi-trial-k8s -o custom-columns=POD_IP:.status.podIPs
    kubectl get deployments
    ```
2. Expose the service by, 
    ```
    kubectl expose deployment fastapi-trial-k8s --type=LoadBalancer --name=fastapi-svc
    # or
    kubectl apply -f svc.yaml
    # check
    kubectl get svc
    ```

### From ECR
1. After deploying ecr, get token.
    ```
    aws-vault exec leohotmail --no-session -- aws ecr get-login-password --region eu-west-2
    ```
2. Set secret for kubernetes. 
    ```
    kubectl create secret docker-registry regcred --docker-server=312958015255.dkr.ecr.eu-west-2.amazonaws.com/ecr-test-leo --docker-username=AWS --docker-password=$TOKEN
    ```
1. Create deployment from ecr. 
    ```
    kubectl apply -f deploy-from-ecr.yaml 
    ```