```
kubectl run redis --image=redis --dry-run=client -o yaml > pod-definition.yml
```