```
az deployment group create --resource-group exampleRG --template-file main.bicep
export endpt=`az cognitiveservices account show -n leorecognmecogncv -g exampleRG --query 'properties.endpoint' -o tsv`
export subkey=`az cognitiveservices account keys list -n leorecognmecogncv -g exampleRG --query 'key1' -o tsv`
python test-az-cv.py --subkey $subkey --endpt $endpt 
```