import json

print("Loading function")

def longestCommonSubseq(text1,text2):
    n1,n2 = len(text1),len(text2)
    if n1==0 or n2==0: return 0
    dp = [[0 for j in range(n2+1)] for i in range(n1+1)]

    for j in range(n2-1,-1,-1):
        for i in range(n1-1,-1,-1):
            if text1[i] == text2[j]:
                dp[i][j] = 1+dp[i+1][j+1]
            else:
                dp[i][j] = max(dp[i+1][j],dp[i][j+1])
    return dp[0][0]

def lambda_handler(event, context):
    text1 = event['queryStringParameters']['text1']
    text2 = event['queryStringParameters']['text2']

    result = {}
    result['text1'] = text1
    result['text2'] = text2
    result['length'] = longestCommonSubseq(text1,text2)

    responseObject = {}
    responseObject['body'] = json.dumps(result)
    responseObject['statusCode'] = 200
    responseObject['headers'] = {}
    responseObject['headers']['Content-Type'] = "application/json"

    return responseObject