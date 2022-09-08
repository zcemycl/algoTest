param uniqueName string = 'eventleo'

@description('Storage Account type')
@allowed([
  'Standard_LRS'
  'Standard_GRS'
  'Standard_RAGRS'
])
param storageAccountType string = 'Standard_LRS'

@description('Location for all resources.')
param location string = resourceGroup().location

param createdBy string = 'Leo Leung'
param projectName string = 'Azure Trial'
param dateTime string = utcNow()

module eventgrid_blob_queue 'modules/eventgrid.bicep' = {
  name: 'eventgrid-example'
  params: {
    uniqueName: uniqueName
    storageAccountType: storageAccountType
    location: location
    createdBy: createdBy
    projectName: projectName
    dateTime: dateTime
  }
}
