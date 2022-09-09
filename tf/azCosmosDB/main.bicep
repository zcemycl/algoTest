param uniqueName string = 'leocosmos99'
param createdBy string = 'Leo Leung'
param projectName string = 'Azure Trial'
param dateTime string = utcNow()
param location string = resourceGroup().location

module cosmos_example 'cosmosdb.bicep' = {
  name: 'cosmosdb example'
  params: {
    createdBy: createdBy
    projectName: projectName
    dateTime: dateTime
    location: location
    uniqueName: uniqueName
  }
}
