
class Solution:
    @staticmethod
    def dp(nums):
        length = len(nums)
        dpl = [False]*(length-1)+[True]
        for i in range(length-2,-1,-1):
            for j in range(1,nums[i]+1):
                if i+j>length-1:
                    continue
                dpl[i]=max(dpl[i],dpl[i+j])
                if dpl[i]:
                    break
        return dpl[0]
    @staticmethod
    def greedy(nums):
        length = len(nums)
        goal = length-1
        for i in range(length-2,-1,-1):
            if i+nums[i]>=goal:
                goal = i
        return goal==0

