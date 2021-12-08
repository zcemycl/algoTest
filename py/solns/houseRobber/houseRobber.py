class Solution:
    @staticmethod
    def naive(nums):
        dp = nums.copy()
        for i in range(len(nums)-1,-1,-1):
            for tmpdp in dp[i+2:]:
                dp[i]=max(dp[i],nums[i]+tmpdp)
        return max(dp)
    @staticmethod
    def twomax(nums):
        d1,d2=0,0
        for n in nums:
            tmp = max(n+d2,d1)
            d2 = d1
            d1 = tmp
        return d1