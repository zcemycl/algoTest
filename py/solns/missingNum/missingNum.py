class Solution:
    @staticmethod
    def naive(nums):
        n = len(nums)
        total=n*(n+1)//2
        for n in nums:
            total-=n
        return total
    @staticmethod
    def xor(nums):
        miss = len(nums)
        for i,n in enumerate(nums):
            miss^=i^n
        return miss