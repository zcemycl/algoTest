### How to start?
1. Create Resource group. 
    ```
    az group create --name rg-blog-example  --location westeurope
    ```
2. Create storage account. (must)
3. Create function app. (you must choose a location with dynamic workers)
    ```
    az functionapp create --consumption-plan-location westeurope --runtime python --runtime-version 3.7 --functions-version 4 --name leoassassFunc --os-type linux --storage-account funcstorageacc1197 -g rg-blog-example
    ### 2 and 3 tegether by bicep
    az deployment group create -g rg-blog-example --template-file main.bicep --parameters appInsightsLocation=westeurope appName=leosleepyFunc
    ```
4. Create the folder which contains multiple function folders and settings files.
    a. Use Azure VSCode extension. 
        - Download Azure Functions Extension. 
        - Left panel to find Azure logo, sign in.
        - F1 Azure Functions: Create Function. (better to open a new window for vscode with root that you prefer.)
    b. Use `func` command line. 
    c. Run the functions locally, via `func start`.
5. Deploy the function project to Azure.
    ```
    func azure functionapp publish leoassassFunc
    ```
6. Find the invoke link and api token. 
    - Go to your resource group, then your function app.
    - Click in Functions -> Functions. Go to your specific function. 
    - Get Function Url. (It should include a code as api key.)
    - Or get it from Function keys. (Add `?code=` followed by your key, and `&params=` for other parameters.)

### Useful commands
1. Get the invoke url.
    ```
    FUNCAPP_URL=`az functionapp function show \
    --function-name HttpTrigger1 \
    --name leofuncappuploadexcel11 \
    -g exampleRG \
    --query "invokeUrlTemplate" \
    --output tsv`
    ```
2. Get the code for calling url with authorisation. 
    ```
    FUNCAPP_CODE=`az functionapp function keys list \
    --function-name HttpTrigger1 \
    --name leofuncappuploadexcel11 \
    -g exampleRG \
    --query default -o tsv`
    ```


### References
1. [Develop Azure Functions by using Visual Studio Code](https://docs.microsoft.com/en-us/azure/azure-functions/functions-develop-vs-code?tabs=python)
2. [Quickstart: Create and deploy Azure Functions resources using Bicep](https://docs.microsoft.com/en-us/azure/azure-functions/functions-create-first-function-bicep?tabs=CLI)
3. [Quickstart: Create a Python function in Azure from the command line](https://docs.microsoft.com/en-us/azure/azure-functions/create-first-function-cli-python?tabs=azure-cli%2Cbash%2Cbrowser)