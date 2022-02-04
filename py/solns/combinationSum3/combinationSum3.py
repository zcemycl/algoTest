class Solution:
    @staticmethod
    def naive(n,k):
        res = []
        def dfs(start,els,total):
            if total==n and len(els)==k:
                res.append(els)
                return
            if total>n or len(els)>k:
                return
            for i in range(start,10):
                dfs(i+1,els+[i],total+i)
        dfs(1,[],0)
        return res
