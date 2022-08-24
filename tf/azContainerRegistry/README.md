### How to start?
1. Create Resource Group.
    ```
    az group create --name exampleRG  --location uksouth
    ```
2. Deploy bicep file. 
    ```
    az deployment group create --resource-group rg-blog-sample --template-file main.bicep --parameters acrName=abcCR
    ```
3. Login your container registry.
    ```
    az login
    az acr login --name abcCR
    ```
4. Tag and push from your local. 
    ```
    docker tag dash-client-dev:latest abccr.azurecr.io/samples/dash-client-dev
    docker push abccr.azurecr.io/samples/dash-client-dev
    ```