### How to run?
1. Create infrastructure by `terraform apply`.
2. Connect to EKS by using config. 
    ```
    aws-vault exec leohotmail -- aws eks --region eu-west-2 update-kubeconfig --name leo-demo
    aws-vault exec leohotmail -- kubectl get pods # need aws-vault since it is connected to aws.
    ```
3. Create secrets to connect ECR.
    ```
    kubectl create secret docker-registry regcred --docker-server=312958015255.dkr.ecr.eu-west-2.amazonaws.com/ecr-test-leo --docker-username=AWS --docker-password=$TOKEN
    kubectl get secrets
    ```
4. Create deployment and service. 
    ```
    kubectl apply -f server.yaml
    ```
5. Get load balancer listener arn.
    ```
    ./k8s/aws/get_listenerarn.sh
    ```
5. Create apigateway?