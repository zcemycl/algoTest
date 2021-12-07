
class Solution:
    @staticmethod
    def dp(nums):
        dpl = [1]*(len(nums))
        for i in range(len(nums)-1,-1,-1):
            for j in range(i+1,len(nums)):
                if nums[i]<nums[j]:
                    dpl[i] = max(dpl[i],1+dpl[j])
        return max(dpl)
    @staticmethod
    def naive(nums):
        ansList = []
        visited = dict()
        visited[repr(ansList)]=0
        return Solution.dfs(nums,0,ansList,visited)
    @staticmethod
    def increasing(nums):
        if len(nums)<=1: return len(nums)
        ans = 1
        for i in range(1,len(nums)):
            if nums[i]>nums[i-1]:
                ans+=1
            else: break
        return ans
    @staticmethod
    def dfs(nums,i,ansList,visited):
        c = 0
        if repr(ansList) not in visited:
            c = Solution.increasing(ansList)
            visited[repr(ansList)] = c
        if i==len(nums): return c
        for j in range(i,len(nums)):
            c = Solution.dfs(nums,i+1,ansList+[],visited)
            c = Solution.dfs(nums,i+1,ansList+[nums[i]],visited)
        return max(list(visited.values()))