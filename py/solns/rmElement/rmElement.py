
class Solution:
    @staticmethod
    def naive(nums,val):
        ptid = 0 
        for i in range(len(nums)):
            if nums[i]!=val:
                nums[ptid],nums[i]=nums[i],nums[ptid]
                ptid+=1
        return ptid
