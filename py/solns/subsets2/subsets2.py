class Solution:
    @staticmethod
    def naive(nums):
        nums.sort()
        res = []
        visited = set()
        def dfs(acum,index,hashStr):
            if hashStr in visited: return 
            res.append(acum)
            visited.add(hashStr)
            for i in range(index,len(nums)):
                dfs(acum+[nums[i]],i+1,hashStr+','+str(nums[i]))
        dfs([],0,"")
        return res