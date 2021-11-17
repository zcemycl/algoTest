
class Solution:
    @staticmethod
    def naive(nums):
        maxVal = nums[0]
        acum = nums[0]
        for i in range(1,len(nums)):
            acum += nums[i]
            acum = max(acum,nums[i])
            maxVal = max(maxVal,acum)
        return maxVal
