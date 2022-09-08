param uniqueName string = 'leorecognme'
@description('Location for all resources.')
param location string = resourceGroup().location

param createdBy string = 'Leo Leung'
param projectName string = 'Azure Trial'
param dateTime string = utcNow()

var cogncvName = '${uniqueName}cogncv'

resource cogncv 'Microsoft.CognitiveServices/accounts@2022-03-01' = {
  name: cogncvName
  location: location
  tags: {
    createdBy: createdBy
    projectName: projectName
    dateTime: dateTime
  }
  sku: {
    name: 'F0'
  }
  kind: 'ComputerVision'
  identity: {
    type: 'SystemAssigned'
  }
  properties: {
    publicNetworkAccess: 'Enabled'
  }
}
