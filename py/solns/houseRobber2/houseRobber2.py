class Solution:
    @staticmethod
    def twomax(nums):
        d1,d2=0,0
        for n in nums:
            tmp = max(n+d2,d1)
            d2 = d1
            d1 = tmp
        return d1
    @staticmethod
    def naive(nums):
        if len(nums)==1:return nums[0]
        res1 = Solution.twomax(nums[1:])
        res2 = Solution.twomax(nums[:-1])
        return max(res1,res2)