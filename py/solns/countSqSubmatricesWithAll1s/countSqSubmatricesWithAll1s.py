class Solution:
    @staticmethod
    def naive(matrix):
        rows = len(matrix)
        cols = len(matrix[0])
        dp = [[0 for i in range(cols)] for j in range(rows)]
        res = 0
        for j in range(rows):
            for i in range(cols):
                if matrix[j][i]:
                    if i==0:
                        dp[j][i]=1
                    elif j==0:
                        dp[j][i]=1
                    elif i==0 and j==0:
                        dp[j][i]=1
                    else:
                        dp[j][i]=min(dp[j-1][i],dp[j][i-1],
                                    dp[j-1][i-1])+1
                res+=dp[j][i]
        return res