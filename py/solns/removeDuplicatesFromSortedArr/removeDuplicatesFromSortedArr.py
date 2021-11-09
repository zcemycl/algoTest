class Solution:
    @staticmethod
    def naive(nums):
        if len(nums)<=1: return len(nums)
        maxVal = nums[0]
        ptid = 1
        for i in range(1,len(nums)):
            if nums[i]>maxVal: 
                maxVal = nums[i]
                nums[i],nums[ptid]=nums[ptid],nums[i]
                ptid+=1
        return ptid