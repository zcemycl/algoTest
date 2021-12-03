
class Solution:
    @staticmethod
    def naive(n): # n time + constant space
        n1,n2 = 1,1
        for i in range(n-1):
            tmp = n2
            n2 += n1
            n1 = tmp
        return n2
    @staticmethod
    def dp(n): # n time + space
        if n==1: return 1
        dp = [1,2]
        for i in range(2,n+1):
            dp.append(dp[i-1]+dp[i-2])
        return dp[n-1]
    @staticmethod
    def formula(n): # logn time (power) + constant space
        sqrt5 = 5**0.5
        fibn = ((1+sqrt5)/2)**(n+1)-((1-sqrt5)/2)**(n+1)
        return int(fibn/sqrt5)
