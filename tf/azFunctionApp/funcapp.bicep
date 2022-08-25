param sites_leoleoassassFunc_name string = 'leoleoassassFunc'
param serverfarms_WestEuropeLinuxDynamicPlan_externalid string = '/subscriptions/6d1996f6-88f5-4de5-960e-1430bd75915b/resourceGroups/rg-example/providers/Microsoft.Web/serverfarms/WestEuropeLinuxDynamicPlan'
param location string = resourceGroup().location
// param func_name string = ''
param customDomainVerificationId string = ''

resource sites_leoleoassassFunc_name_resource 'Microsoft.Web/sites@2022-03-01' = {
  name: sites_leoleoassassFunc_name
  location: location
  kind: 'functionapp,linux'
  properties: {
    enabled: true
    hostNameSslStates: [
      {
        name: 'leoleoassassfunc.azurewebsites.net'
        sslState: 'Disabled'
        hostType: 'Standard'
      }
      {
        name: 'leoleoassassfunc.scm.azurewebsites.net'
        sslState: 'Disabled'
        hostType: 'Repository'
      }
    ]
    serverFarmId: serverfarms_WestEuropeLinuxDynamicPlan_externalid
    reserved: true
    isXenon: false
    hyperV: false
    vnetRouteAllEnabled: false
    vnetImagePullEnabled: false
    vnetContentShareEnabled: false
    siteConfig: {
      numberOfWorkers: 1
      linuxFxVersion: 'Python|3.7'
      acrUseManagedIdentityCreds: false
      alwaysOn: false
      http20Enabled: true
      functionAppScaleLimit: 200
      minimumElasticInstanceCount: 0
    }
    scmSiteAlsoStopped: false
    clientAffinityEnabled: false
    clientCertEnabled: false
    clientCertMode: 'Required'
    hostNamesDisabled: false
    customDomainVerificationId: customDomainVerificationId 
    containerSize: 0
    dailyMemoryTimeQuota: 0
    httpsOnly: false
    redundancyMode: 'None'
    storageAccountRequired: false
    keyVaultReferenceIdentity: 'SystemAssigned'
  }
}

resource sites_leoleoassassFunc_name_ftp 'Microsoft.Web/sites/basicPublishingCredentialsPolicies@2022-03-01' = {
  parent: sites_leoleoassassFunc_name_resource
  name: 'ftp'
  location: location
  properties: {
    allow: true
  }
}

resource sites_leoleoassassFunc_name_scm 'Microsoft.Web/sites/basicPublishingCredentialsPolicies@2022-03-01' = {
  parent: sites_leoleoassassFunc_name_resource
  name: 'scm'
  location: location
  properties: {
    allow: true
  }
}

resource sites_leoleoassassFunc_name_web 'Microsoft.Web/sites/config@2022-03-01' = {
  parent: sites_leoleoassassFunc_name_resource
  name: 'web'
  location: location
  properties: {
    numberOfWorkers: 1
    defaultDocuments: [
      'Default.htm'
      'Default.html'
      'Default.asp'
      'index.htm'
      'index.html'
      'iisstart.htm'
      'default.aspx'
      'index.php'
    ]
    netFrameworkVersion: 'v4.0'
    linuxFxVersion: 'Python|3.7'
    requestTracingEnabled: false
    remoteDebuggingEnabled: false
    httpLoggingEnabled: false
    acrUseManagedIdentityCreds: false
    logsDirectorySizeLimit: 35
    detailedErrorLoggingEnabled: false
    publishingUsername: '$leoleoassassFunc'
    scmType: 'None'
    use32BitWorkerProcess: false
    webSocketsEnabled: false
    alwaysOn: false
    managedPipelineMode: 'Integrated'
    virtualApplications: [
      {
        virtualPath: '/'
        physicalPath: 'site\\wwwroot'
        preloadEnabled: false
      }
    ]
    loadBalancing: 'LeastRequests'
    experiments: {
      rampUpRules: []
    }
    autoHealEnabled: false
    vnetRouteAllEnabled: false
    vnetPrivatePortsCount: 0
    localMySqlEnabled: false
    ipSecurityRestrictions: [
      {
        ipAddress: 'Any'
        action: 'Allow'
        priority: 2147483647
        name: 'Allow all'
        description: 'Allow all access'
      }
    ]
    scmIpSecurityRestrictions: [
      {
        ipAddress: 'Any'
        action: 'Allow'
        priority: 2147483647
        name: 'Allow all'
        description: 'Allow all access'
      }
    ]
    scmIpSecurityRestrictionsUseMain: false
    http20Enabled: true
    minTlsVersion: '1.2'
    scmMinTlsVersion: '1.2'
    ftpsState: 'AllAllowed'
    preWarmedInstanceCount: 0
    functionAppScaleLimit: 200
    functionsRuntimeScaleMonitoringEnabled: false
    minimumElasticInstanceCount: 0
    azureStorageAccounts: {
    }
  }
}

resource sites_leoleoassassFunc_name_HttpTrigger1 'Microsoft.Web/sites/functions@2022-03-01' = {
  parent: sites_leoleoassassFunc_name_resource
  name: 'HttpTrigger1'
  location: location
  properties: {
    script_root_path_href: 'https://leoleoassassfunc.azurewebsites.net/admin/vfs/home/site/wwwroot/HttpTrigger1/'
    script_href: 'https://leoleoassassfunc.azurewebsites.net/admin/vfs/home/site/wwwroot/HttpTrigger1/__init__.py'
    config_href: 'https://leoleoassassfunc.azurewebsites.net/admin/vfs/home/site/wwwroot/HttpTrigger1/function.json'
    test_data_href: 'https://leoleoassassfunc.azurewebsites.net/admin/vfs/tmp/FunctionsData/HttpTrigger1.dat'
    href: 'https://leoleoassassfunc.azurewebsites.net/admin/functions/HttpTrigger1'
    config: {
    }
    invoke_url_template: 'https://leoleoassassfunc.azurewebsites.net/api/httptrigger1'
    language: 'python'
    isDisabled: false
  }
}

resource sites_leoleoassassFunc_name_HttpTrigger2 'Microsoft.Web/sites/functions@2022-03-01' = {
  parent: sites_leoleoassassFunc_name_resource
  name: 'HttpTrigger2'
  location: location
  properties: {
    script_root_path_href: 'https://leoleoassassfunc.azurewebsites.net/admin/vfs/home/site/wwwroot/HttpTrigger2/'
    script_href: 'https://leoleoassassfunc.azurewebsites.net/admin/vfs/home/site/wwwroot/HttpTrigger2/__init__.py'
    config_href: 'https://leoleoassassfunc.azurewebsites.net/admin/vfs/home/site/wwwroot/HttpTrigger2/function.json'
    test_data_href: 'https://leoleoassassfunc.azurewebsites.net/admin/vfs/tmp/FunctionsData/HttpTrigger2.dat'
    href: 'https://leoleoassassfunc.azurewebsites.net/admin/functions/HttpTrigger2'
    config: {
    }
    invoke_url_template: 'https://leoleoassassfunc.azurewebsites.net/api/httptrigger2'
    language: 'python'
    isDisabled: false
  }
}

resource sites_leoleoassassFunc_name_sites_leoleoassassFunc_name_azurewebsites_net 'Microsoft.Web/sites/hostNameBindings@2022-03-01' = {
  parent: sites_leoleoassassFunc_name_resource
  name: '${sites_leoleoassassFunc_name}.azurewebsites.net'
  location: location
  properties: {
    siteName: 'leoleoassassFunc'
    hostNameType: 'Verified'
  }
}
