class Solution:
    @staticmethod
    def naive(nums,target):
        d = {}
        for i,n in enumerate(nums):
            if n in d: 
                return i,d[n]
            d[target-n] = i
        return None