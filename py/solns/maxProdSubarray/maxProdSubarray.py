
class Solution:
    @staticmethod
    def naive(nums):
        minVal = nums[0]
        maxVal = nums[0]
        result = maxVal
        for i in nums[1:]:
            tmpmax = max(i,maxVal*i,minVal*i)
            minVal = min(i,maxVal*i,minVal*i)
            maxVal = tmpmax
            result = max(result,maxVal)
        return result
