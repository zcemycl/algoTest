class Solution:
    @staticmethod
    def naive(m,n):
        dp = [[0 for i in range(n+1)] for j in range(m+1)]
        dp[m-1][n-1]=1
        for i in range(m-1,-1,-1):
            for j in range(n-1,-1,-1):
                dp[i][j] = max(dp[i][j],dp[i+1][j]+dp[i][j+1])
        return dp[0][0]