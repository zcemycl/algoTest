class Solution:
    @staticmethod
    def naive(nums,target):
        left,right = 0,len(nums)-1
        while right>left+1:
            mid = (left+right)//2
            if nums[mid]>target:
                right = mid
            elif nums[mid]<target:
                left = mid
            else:
                return mid
        if target<=nums[right] and target<=nums[left]:
            return left
        if nums[left]<target<=nums[right]:
            return right
        if target>=nums[right] and target>nums[left]:
            if target==nums[right]:
                return right
            else: 
                return right+1
