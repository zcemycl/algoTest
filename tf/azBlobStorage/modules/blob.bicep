// @description('Name of the blob as it is stored in the blob container')
// param filename string = ''

// @description('UTC timestamp')
// param utcValue string = utcNow()

@description('Name of the blob container')
param containerName string = 'image'

@description('Azure region where resources should be deployed')
param location string = resourceGroup().location

@description('Desired name of the storage account')
param storageAccountName string = uniqueString(resourceGroup().id, deployment().name, 'blob')


resource storage 'Microsoft.Storage/storageAccounts@2021-04-01' = {
  name: storageAccountName
  location: location
  sku: {
    name: 'Standard_LRS'
  }
  kind: 'StorageV2'

  resource blobService 'blobServices' = {
    name: 'default'

    resource container 'containers' = {
      name: containerName
    }
  }
}

// resource deploymentScript 'Microsoft.Resources/deploymentScripts@2020-10-01' = {
//   name: 'deployscript-upload-blob-${utcValue}'
//   location: location
//   kind: 'AzureCLI'
//   properties: {
//     azCliVersion: '2.26.1'
//     timeout: 'PT5M'
//     retentionInterval: 'PT1H'
//     environmentVariables: [
//       {
//         name: 'AZURE_STORAGE_ACCOUNT'
//         value: storage.name
//       }
//       {
//         name: 'AZURE_STORAGE_KEY'
//         secureValue: storage.listKeys().keys[0].value
//       }
//       {
//         name: 'CONTENT'
//         value: loadTextContent('/media/yui/Disk/data/people.jpg')
//       }
//     ]
//     scriptContent: 'echo "$CONTENT" > ${filename} && az storage blob upload -f ${filename} -c ${containerName} -n ${filename}'
//   }
// }
