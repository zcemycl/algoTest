class Solution:
    @staticmethod
    def naive(prices):
        maxVal = 0
        buy = prices[0]
        for p in prices:
            if p-buy>0:
                maxVal+=p-buy
                buy = p
            else:
                buy=p
        return maxVal
