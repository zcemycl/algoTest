import json

import boto3

region = "eu-west-2"
ec2 = boto3.client("ec2", region_name=region)

def lambda_handler(event, context):
    print(event,type(event))
    instanceId = event["queryStringParameters"]["instanceId"]
    action = event["queryStringParameters"]["action"]
    dct = ec2.describe_instances(Filters=[
        {"Name":"key-name","Values":["mykey"]}
    ])
    resp,respObj,tar = {},{},None
    respObj["headers"] = {}
    respObj["headers"]["Content-Type"] = "application/json"
    statusCode = 404
    for r in dct['Reservations']:
        for i in r['Instances']:
            print(i['InstanceId'], i['Hypervisor'])
            if i['InstanceId']==instanceId:
                statusCode = 200
                resp["ip"] = i.get("PublicIpAddress","")
                
    respObj["statusCode"] = statusCode
    respObj["body"] = json.dumps(resp)
    print(respObj)
    if statusCode==404:
        return respObj

    if action=="stop":
        ec2.stop_instances(InstanceIds=[instanceId])
        print(f"Stopping {instanceId}... ")
    elif action=="start":
        ec2.start_instances(InstanceIds=[instanceId])
        print(f"Starting  {instanceId}...")
    elif action=="describe":
        pass
    return respObj
    