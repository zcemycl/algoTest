### How to start?
1. Create resource group and container registry. 
2. Enable admin user in your container registry, and record username and password. 
3. Create App service. It takes a while. 
    ```
    az deployment group create --resource-group rg-blog-sample --template-file main.bicep --parameters siteName='dashApp22826242' dockerRegistryHost='abccr.azurecr.io' dockerImage='samples/dash-client-dev:latest' dockerUsername=abcCR dockerPassword={}
    ```

### System assigned identity (ignore)
```
resourceID=$(az acr show --resource-group rg-blog-sample --name abcCR --query id --output tsv)
spID=$(az webapp show -g rg-blog-sample -n dashApp22826242 --query identity.principalId --out tsv)
az role assignment create --assignee $spID --scope $resourceID --role acrpull
```