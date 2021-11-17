
class Solution:
    @staticmethod
    def naive(prices):
        maxReturn = 0
        minVal = prices[0]
        for i in range(1,len(prices)):
            if prices[i]-minVal > maxReturn:
                maxReturn = prices[i]-minVal
            if prices[i]<minVal:
                minVal = prices[i]
        return maxReturn