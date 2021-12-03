
class Solution:
    @staticmethod
    def naive(coins,amount):
        return Solution.coinChange(0,coins,amount)
    @staticmethod
    def coinChange(i,coins,amount):
        if amount == 0: return 0
        if (i<len(coins) and amount >0):
            maxNum = amount//coins[i]
            minCost = 1000
            for x in range(maxNum+1):
                if amount>=x*coins[i]:
                    res = Solution.coinChange(i+1,
                        coins,amount-x*coins[i])
                    if res!=-1:
                        minCost = min(minCost,res+x)
            if minCost == 1000: return -1
            else: return minCost
        return -1
    @staticmethod
    def dp(coins,amount):
        dpl = [amount+1]*(amount+1)
        dpl[0]=0
        for i in range(1,amount+1):
            if i in coins: 
                dpl[i]=1
            else:
                for c in coins:
                    if i>=c:
                        dpl[i] = min(dpl[i],1+dpl[i-c])
        return dpl[-1] if dpl[-1]!=amount+1 else -1