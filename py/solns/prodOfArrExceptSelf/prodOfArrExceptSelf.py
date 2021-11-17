
class Solution:
    @staticmethod
    def naive(nums):
        Len = len(nums)
        L,R = [1]*Len,[1]*Len
        for i in range(1,Len):
            L[i] = nums[i-1]*L[i-1]
        for i in reversed(range(1,Len)):
            R[i-1] = nums[i]*R[i]
        for i in range(Len):
            nums[i] = L[i]*R[i] 
        return nums