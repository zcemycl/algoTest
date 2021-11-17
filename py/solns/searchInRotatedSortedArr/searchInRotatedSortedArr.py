
class Solution:
    @staticmethod
    def naive(nums,target):
        l,r = 0,len(nums)-1
        while l<=r:
            m = (l+r)//2
            if nums[m]==target:
                return m
            if nums[l]<=nums[m]:
                if target>=nums[l] and target<nums[m]:
                    r=m-1
                else:
                    l=m+1
            else:
                if target<=nums[r] and target>nums[m]:
                    l=m+1
                else:
                    r=m-1
        return -1
