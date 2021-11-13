
class Solution:
    @staticmethod
    def naive(nums):
        first  = min(nums[:2])
        second = max(nums[:2])
        for n in nums[2:]:
            if n > first:
                if n > second:
                    tmp = second
                    second = n
                    first = tmp
                else:
                    first = n
        return (first-1)*(second-1)
