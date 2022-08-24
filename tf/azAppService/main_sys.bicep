param webAppName string
param hostingPlanName string = 'asp-${webAppName}'
param location string = resourceGroup().location
param acrRG string = 'rg-blog-sample'
// param acrURL string
param dockerRegistryHost string = 'abccr.azurecr.io'
// param acrImage string
// param acrTag string
param dockerImage string = 'samples/dash-client-dev:latest'

// var linuxFxVersion = 'DOCKER|${acrURL}/${acrImage}:${acrTag}'

module acrPUll_Permission './nested_acrPUll_Permission.bicep' = {
  name: 'acrPUll_Permission'
  scope: resourceGroup(acrRG)
  params: {
    resourceId_Microsoft_Web_sites_parameters_webAppName: reference(webAppName_resource.id, '2019-08-01', 'full')
    webAppName: webAppName
  }
}

resource webAppName_resource 'Microsoft.Web/sites@2022-03-01' = {
  name: webAppName
  location: location
  identity: {
    type: 'SystemAssigned'
  }
  tags: {
  }
  properties: {
    siteConfig: {
      linuxFxVersion: 'DOCKER|${dockerRegistryHost}/${dockerImage}' 
      acrUseManagedIdentityCreds: true
    }
    serverFarmId: '/subscriptions/${subscription().subscriptionId}/resourcegroups/${resourceGroup().id}/providers/Microsoft.Web/serverfarms/${hostingPlanName}'
  }
  dependsOn: [
    hostingPlanName_resource
  ]
}

resource hostingPlanName_resource 'Microsoft.Web/serverfarms@2022-03-01' = {
  kind: 'linux'
  name: hostingPlanName
  location: location
  properties: {
    reserved: true
  }
  sku: {
    tier: 'Standard'
    name: 'S1'
  }
  dependsOn: []
}
