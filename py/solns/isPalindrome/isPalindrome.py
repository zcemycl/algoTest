import math

class Solution:
    @staticmethod
    def naive(x):
        if x<=0: return x==0
        x = abs(x)
        n = int(math.log10(x)+1)
        for i in range(n//2):
            result = x//10**(n-i-1)%10 == x//10**i%10
            if not result: return False
        return True
