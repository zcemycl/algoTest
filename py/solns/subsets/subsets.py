class Solution:
    @staticmethod
    def naive(nums):
        res = []
        def dfs(acum,index):
            res.append(acum)
            for i in range(index,len(nums)):
                dfs(acum+[nums[i]],i+1)
        dfs([],0)
        return res
