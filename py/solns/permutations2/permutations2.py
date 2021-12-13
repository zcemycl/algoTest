class Solution:
    @staticmethod
    def naive(nums):
        dic = {i:nums[i] for i in range(len(nums))}
        visited = set()
        res = []
        
        def dfs(ls,tracker):
            if len(ls)==len(dic):
                if repr(ls) not in visited:
                    visited.add(repr(ls))
                    res.append(ls)
                return 
            for i in dic:
                if i not in tracker:
                    dfs(ls+[dic[i]],tracker|set([i]))
        dfs([],set())
        return res
