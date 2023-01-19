```
kubectl create -f deployment.yml
kubectl get deployments
kubectl apply -f deployment.yml
kubectl set image deployment/[name] [container-name]=[new-image-name]
kubectl rollout status deployment/[name]
kubectl rollout history deployment/[name]
kubectl rollout undo deployment/[name]
```