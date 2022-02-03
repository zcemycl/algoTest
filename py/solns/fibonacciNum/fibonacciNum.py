class Solution:
    @staticmethod
    def naive(n):
        prev_1,prev_2 = 1,0
        if n==0: return 0
        for i in range(2,n+1):
            tmp = prev_1
            prev_1 = prev_1+prev_2
            prev_2 = tmp
        return prev_1