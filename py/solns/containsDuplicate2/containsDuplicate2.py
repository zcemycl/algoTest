class Solution:
    @staticmethod
    def naive(nums,k):
        prevIdxDict = dict()
        for i in range(len(nums)):
            if nums[i] in prevIdxDict and \
                abs(i-prevIdxDict[nums[i]])<=k:
                return True
            prevIdxDict[nums[i]]=i
        return False
                
