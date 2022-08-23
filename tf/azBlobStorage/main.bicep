targetScope = 'subscription'

param location string = 'ukwest'

resource rg 'Microsoft.Resources/resourceGroups@2021-04-01' = {
  name: 'rg-upload-to-storage-example'
  location: location
  tags: {
    'application': 'azure-bicep-upload-data-to-storage'
  }
}

module blob 'modules/blob.bicep' = {
  name: 'blob-example'
  scope: rg
  params: {
    location: location
  }
}

