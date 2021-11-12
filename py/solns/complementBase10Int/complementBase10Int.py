
class Solution:
    @staticmethod
    def naive(n):
        if n==0: return 1
        newN = 0; i=0
        while n!=0:
            remain = ~n%2
            newN += remain*2**i
            n = n>>1
            i+=1
        return newN
