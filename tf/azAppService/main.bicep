@description('The name of the app service that you wish to create.')
param siteName string

@description('The docker registry hostname.')
param dockerRegistryHost string

@description('The docker registry username.')
param dockerUsername string

@secure()
@description('The docker registry password.')
param dockerPassword string

@description('The relative docker image name.')
param dockerImage string

param location string = resourceGroup().location

var servicePlanName = 'plan-${siteName}-001'

resource servicePlan 'Microsoft.Web/serverfarms@2016-09-01' = {
  kind: 'linux'
  name: servicePlanName
  location: location
  properties: {
    name: servicePlanName
    reserved: true
  }
  sku: {
    tier: 'Standard'
    name: 'S1'
  }
  dependsOn: []
}

resource siteName_resource 'Microsoft.Web/sites@2016-08-01' = {
  name: siteName
  location: location
  properties: {
    siteConfig: {
      appSettings: [
        {
          name: 'WEBSITES_ENABLE_APP_SERVICE_STORAGE'
          value: 'false'
        }
        {
          name: 'DOCKER_REGISTRY_SERVER_URL'
          value: 'https://${dockerRegistryHost}'
        }
        {
          name: 'DOCKER_REGISTRY_SERVER_USERNAME'
          value: dockerUsername
        }
        {
          name: 'DOCKER_REGISTRY_SERVER_PASSWORD'
          value: dockerPassword
        }
      ]
      linuxFxVersion: 'DOCKER|${dockerRegistryHost}/${dockerImage}'
    }
    serverFarmId: servicePlan.id
  }
}
