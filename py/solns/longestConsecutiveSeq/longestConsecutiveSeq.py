class Solution:
    @staticmethod
    def naive(nums):
        group = set(nums)
        res = 0
        for n in nums:
            c = 0
            if n-1 not in group:
                while n in group:
                    c+=1 
                    n+=1
            res = max(res,c)
        return res