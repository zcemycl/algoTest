class Solution:
    @staticmethod
    def naive(n):
        res = 0
        for _ in range(32):
            res = res*2+n%2
            n = n>>1
        return res