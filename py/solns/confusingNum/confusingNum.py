import math

class Solution:
    @staticmethod
    def naive(n):
        if n==0: return False
        orig = n
        non_reverse = [2,3,4,5,7]
        reverse = {0:0,1:1,6:9,8:8,9:6}
        newN = 0
        nDigits = int(math.log10(n))
        for i in range(nDigits+1):
            remain = n%10
            if remain in non_reverse:
                return False
            if remain in reverse:
                newN += reverse[remain]*10**(nDigits-i)
            n//=10
        return orig!=newN
