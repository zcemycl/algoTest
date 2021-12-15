class Solution:
    @staticmethod
    def naive(n,k):
        res = []
        def dfs(acum,start):
            if len(acum)==k: 
                res.append(acum) 
                return 
            for i in range(start,n):
                dfs(acum+[i+1],i+1)
        dfs([],0)
        return res