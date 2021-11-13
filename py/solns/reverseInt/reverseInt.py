
class Solution:
    @staticmethod
    def naive(x):
        newX = 0
        sign = 1 if x>=0 else -1
        x = abs(x)
        limit = 2**31
        while x!=0:
            remain = x%10
            x //= 10
            newX = newX*10+remain
            if newX>limit-1 or newX<-limit: return 0
        return sign*newX
