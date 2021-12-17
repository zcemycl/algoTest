class Solution:
    @staticmethod
    def naive(n):
        res = 0
        while n:
            n = n&(n-1)
            res+=1
        return res
