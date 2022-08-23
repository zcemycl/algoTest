### How to start?
1. Run the following, (this creates resource group and resources together)
    ```
    az deployment sub create --name blob-example --location ukwest --template-file ./main.bicep
    ```
2. Upload an image. 
    ```
    az storage blob upload --account-name xxxxxxxx --container-name image --file /media/yui/Disk/data/people.jpg 
    ```
3. Delete resource group with subscription. (Need to manually do this)
    ```
    az deployment sub delete --name blob-example
    # delete deployment in resource group
    az deployment group delete -g rg-upload-to-storage-example -n blob-example
    ```