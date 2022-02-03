
class Solution:
    def naive(self,candidates,target):
        candidates.sort()
        self.n,res = len(candidates),[]
        visited=set()
        def dfs(start,els,total):
            if total==target:
                if tuple(els) not in visited:
                    res.append(els)
                visited.add(tuple(els))
                return
            if tuple(els) in visited:
                return 
            visited.add(tuple(els))
            if total>target or start>=self.n:
                return
            for i in range(start,self.n):
                dfs(i+1,els+[candidates[i]],
                   total+candidates[i])
        dfs(0,[],0)
        return res
