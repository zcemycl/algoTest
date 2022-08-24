### How to start?
1. Create Resource group. 
2. Create storage account. (must)
3. Create function app. (you must choose a location with dynamic workers)
    ```
    az functionapp create --consumption-plan-location westeurope --runtime python --runtime-version 3.7 --functions-version 4 --name leoassassFunc --os-type linux --storage-account funcstorageacc1197 -g rg-blog-sample
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