class Solution:
    @staticmethod
    def naive(candidates,target):
        store = []
        Solution.dfs(candidates,target,0,[],store)
        return store
    @staticmethod
    def dfs(candidates,target,i,acum,store):
        if sum(acum)==target: store.append(acum)
        if sum(acum)>=target: return
        if i<len(candidates):
            Solution.dfs(candidates,target,
                i,acum+[candidates[i]],store)
            Solution.dfs(candidates,target,
                i+1,acum,store)
    @staticmethod
    def combinationSum(candidates,target):
        res = []
        def dfs(i,acum,total):
            if total==target: res.append(acum)
            if total>=target: return
            if i<len(candidates):
                dfs(i,acum+[candidates[i]],total+candidates[i])
                dfs(i+1,acum,total)
        dfs(0,[],0)
        return res