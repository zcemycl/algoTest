class Solution:
    @staticmethod
    def naive(nums):
        dic = {i:nums[i] for i in range(len(nums))}
        res = []
        def dfs(ls,tracker):
            if len(ls)==len(dic):
                res.append(ls)
            for i in dic:
                if i not in tracker:
                    dfs(ls+[dic[i]],tracker|set([i]))
        dfs([],set())
        return res
