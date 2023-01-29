import json

print('Loading function')


def lambda_handler(event, context):
    #print("Received event: " + json.dumps(event, indent=2))
    print("value1 = " + event['queryStringParameters']['key1'])
    print("value2 = " + event['queryStringParameters']['key2'])
    print("value3 = " + event['queryStringParameters']['key3'])
    return event['queryStringParameters']['key1']  # Echo back the first key value
    #raise Exception('Something went wrong')
