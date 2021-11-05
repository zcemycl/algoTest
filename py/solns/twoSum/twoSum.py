class Solution:
    @staticmethod
    def naive(nums,target):
        length = len(nums)
        for i in range(length):
            for j in range(i+1,length):
                if nums[i]+nums[j] == target:
                    return [i,j]
    
    @staticmethod
    def hash(nums,target):
        mapNum2Idx = {}
        for i in range(len(nums)):
            dif = target - nums[i]
            if dif in mapNum2Idx:
                return [i,mapNum2Idx[dif]]
            mapNum2Idx[nums[i]] = i