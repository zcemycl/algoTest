class Solution:
    @staticmethod
    def binary(n):
        if (n<=1): return n
        left,right = 2,n//2
        while left<=right:
            p = left+(right-left)//2
            num = p*p
            if num>n:
                right = p-1
            elif num<n:
                left = p+1
            else:
                return p
        return right