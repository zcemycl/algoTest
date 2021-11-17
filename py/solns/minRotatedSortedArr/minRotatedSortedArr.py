
class Solution:
    @staticmethod
    def naive(nums):
        l,r = 0,len(nums)-1
        while l<r:
            m=(l+r)//2
            if nums[m]>nums[l]:
                l=m
            elif nums[m]<nums[r]:
                r=m
            if l==r-1:
                break
        return min(nums[r],nums[0])