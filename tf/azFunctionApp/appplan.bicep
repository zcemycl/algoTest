param serverfarms_WestEuropeLinuxDynamicPlan_name string = 'WestEuropeLinuxDynamicPlan'
param location string = resourceGroup().location

resource serverfarms_WestEuropeLinuxDynamicPlan_name_resource 'Microsoft.Web/serverfarms@2022-03-01' = {
  name: serverfarms_WestEuropeLinuxDynamicPlan_name
  location: location
  sku: {
    name: 'Y1'
    tier: 'Dynamic'
    size: 'Y1'
    family: 'Y'
    capacity: 0
  }
  kind: 'functionapp'
  properties: {
    perSiteScaling: false
    elasticScaleEnabled: false
    maximumElasticWorkerCount: 1
    isSpot: false
    reserved: true
    isXenon: false
    hyperV: false
    targetWorkerCount: 0
    targetWorkerSizeId: 0
    zoneRedundant: false
  }
}
