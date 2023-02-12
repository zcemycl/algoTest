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