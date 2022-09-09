```
az deployment group create --resource-group exampleRG 
    --template-file main.bicep --parameters location=ukwest
export resourceGroupName=exampleRG
accountName=`az cosmosdb list \
        --resource-group $resourceGroupName \
        --query "[0].name" \
        --output tsv`
endpt=`az cosmosdb show \
    --resource-group $resourceGroupName \
    --name $accountName \
    --query "documentEndpoint" -o tsv`
apikey=`az cosmosdb keys list \
    --resource-group $resourceGroupName \
    --name $accountName \
    --type "keys" \
    --query "primaryMasterKey" -o tsv`
python run.py --endpt $endpt --apikey $apikey
```