param uniqueName string = 'leocosmos99'
param createdBy string = 'Leo Leung'
param projectName string = 'Azure Trial'
param dateTime string = utcNow()
param location string = resourceGroup().location

var dbAccName = '${uniqueName}dbacc'
var sqlroledefName1 = '${uniqueName}sqlroledef1'
var sqlroledefName2 = '${uniqueName}sqlroledef2'


param dataActs1 array = [
  'Microsoft.DocumentDB/databaseAccounts/readMetadata'
  'Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers/executeQuery'
  'Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers/readChangeFeed'
  'Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers/items/read'
]

param dataActs2 array = [
  'Microsoft.DocumentDB/databaseAccounts/readMetadata'
  'Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers/*'
  'Microsoft.DocumentDB/databaseAccounts/sqlDatabases/containers/items/*'
]

resource dbAcc 'Microsoft.DocumentDB/databaseAccounts@2022-05-15' = {
  name: dbAccName
  kind: 'GlobalDocumentDB'
  location: location
  tags: {
    CreatedBy: createdBy
    ProjectName: projectName
    DateTime: dateTime
  }
  properties: {
    publicNetworkAccess: 'Enabled'
    enableAutomaticFailover: false
    enableMultipleWriteLocations: false
    databaseAccountOfferType: 'Standard'
    consistencyPolicy: {
      defaultConsistencyLevel: 'Session'
    }
    locations: [
      {
        locationName: location
        failoverPriority: 0
        isZoneRedundant: false
      }
    ]
    backupPolicy: {
      type: 'Periodic'
      periodicModeProperties: {
        backupIntervalInMinutes: 240
        backupRetentionIntervalInHours: 8
        backupStorageRedundancy: 'Geo'
      }
    }
  }
}

resource sqlRoleDef1 'Microsoft.DocumentDB/databaseAccounts/sqlRoleDefinitions@2022-05-15' = {
  parent: dbAcc
  name: guid(dbAccName, sqlroledefName1)
  properties: {
    roleName: 'cosmos db reader'
    type: 'BuiltInRole'
    assignableScopes: [
      dbAcc.id
    ]
    permissions: [
      {
        dataActions: dataActs1
        notDataActions: []
      }
    ]
  }
}

resource sqlRoleDef2 'Microsoft.DocumentDB/databaseAccounts/sqlRoleDefinitions@2022-05-15' = {
  parent: dbAcc
  name: guid(dbAccName, sqlroledefName2)
  properties: {
    roleName: 'cosmos db contributor'
    type: 'BuiltInRole'
    assignableScopes: [
      dbAcc.id
    ]
    permissions: [
      {
        dataActions: dataActs2
        notDataActions: []
      }
    ]
  }
  dependsOn: [
    sqlRoleDef1
  ]
}
