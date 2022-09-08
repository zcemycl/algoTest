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

var storageAccountName = '${uniqueName}storageaccount'
var blobName = '${uniqueName}blobcontainer'
var queueName = '${uniqueName}queue'
var eventGridName = '${uniqueName}eventgrid'

resource storageAccount 'Microsoft.Storage/storageAccounts@2021-08-01' = {
  name: storageAccountName
  location: location
  sku: {
    name: storageAccountType
  }
  kind: 'StorageV2'
  resource blobService 'blobServices' = {
    name: 'default'

    resource container 'containers' = {
      name: blobName 
    }
  }

  resource queueService 'queueServices' = {
    name: 'default'

    resource queue 'queues' = {
      name: queueName
    }
  }

  tags: {
    createdBy: createdBy
    projectName: projectName
    dateTime: dateTime
  }
}

resource systemTopics_event_grid 'Microsoft.EventGrid/systemTopics@2022-06-15' = {
  name: eventGridName
  location: location
  tags: {
    CreatedBy: createdBy
    Project: projectName
    dateTime: dateTime
  }
  identity: {
    type: 'SystemAssigned'
  }
  properties: {
    source: storageAccount.id
    topicType: 'Microsoft.Storage.StorageAccounts'
  }
}

resource systemTopics_event_grid_blob_sub 'Microsoft.EventGrid/systemTopics/eventSubscriptions@2022-06-15' = {
  parent: systemTopics_event_grid
  name: 'blob-sub'
  properties: {
    deliveryWithResourceIdentity: {
      identity: {
        type: 'SystemAssigned'
      }
      destination: {
        properties: {
          resourceId: storageAccount.id
          queueName: queueName
          queueMessageTimeToLiveInSeconds: 604800
        }
        endpointType: 'StorageQueue'
      }
    }
    filter: {
      includedEventTypes: [
        'Microsoft.Storage.BlobCreated'
        'Microsoft.Storage.BlobDeleted'
      ]
      enableAdvancedFilteringOnArrays: true
    }
    labels: []
    eventDeliverySchema: 'EventGridSchema'
    retryPolicy: {
      maxDeliveryAttempts: 30
      eventTimeToLiveInMinutes: 1440
    }
  }
}

resource queue_permission 'Microsoft.Authorization/roleAssignments@2020-04-01-preview' = {
  name: guid('Microsoft.EventGrid/systemTopics/${eventGridName}')
  properties: {
    roleDefinitionId: '/subscriptions/${subscription().subscriptionId}/providers/Microsoft.Authorization/roleDefinitions/c6a89b2d-59bc-44d0-9896-0f6e12d7b80a'
    principalId: reference(systemTopics_event_grid.id, '2022-06-15', 'full').identity.principalId
    principalType: 'ServicePrincipal'
  }
}
