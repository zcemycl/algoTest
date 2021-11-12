
class Solution:
    @staticmethod
    def naive(nums,target):
        left,right = 0,len(nums)-1
        while left<=right:
            pt = (left+right)//2
            if nums[pt] > target:
                right = pt-1
            elif nums[pt] < target:
                left = pt+1
            else:
                return pt
        return -1
