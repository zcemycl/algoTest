param resourceId_Microsoft_Web_sites_parameters_webAppName object
param webAppName string

resource Microsoft_Web_sites_webAppName 'Microsoft.Authorization/roleAssignments@2020-04-01-preview' = {
  name: guid('Microsoft.Web/sites/${webAppName}')
  properties: {
    roleDefinitionId: '/subscriptions/${subscription().subscriptionId}/providers/Microsoft.Authorization/roleDefinitions/7f951dda-4ed3-4680-a7ca-43fe172d538d'
    principalId: resourceId_Microsoft_Web_sites_parameters_webAppName.identity.principalId
    principalType: 'ServicePrincipal'
  }
}
