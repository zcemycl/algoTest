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

### Extra steps to delete
1. Delete Load Balancing in Load Balancers and Target Groups. This will delete the network interfaces as well.
2. Delete private subnets by `terraform destroy` again.


### References
1. [How to use a private AWS Elastic Container Registry (ECR) with an external Kubernetes Cluster or any on-prem infrastructure](https://gtsopour.medium.com/aws-elastic-container-registry-ecr-is-a-fully-managed-container-registry-7624781635d9)
2. [Running a Kubernetes cluster on EKS with Fargate and Terraform](https://engineering.finleap.com/posts/2020-02-27-eks-fargate-terraform/)
3. [Exposing an External IP Address to Access an Application in a Cluster](https://kubernetes.io/docs/tutorials/stateless-application/expose-external-ip-address/)
4. [How to Run Locally Built Docker Images in Kubernetes](https://medium.com/swlh/how-to-run-locally-built-docker-images-in-kubernetes-b28fbc32cc1d)
5. [Youtube: AWS API Gateway - EKS Integration (Terraform)](https://www.youtube.com/watch?v=4cuI4RIq4Hs&t=149s)
6. [Integrate Amazon API Gateway with Amazon EKS](https://aws.amazon.com/tw/blogs/containers/integrate-amazon-api-gateway-with-amazon-eks/)