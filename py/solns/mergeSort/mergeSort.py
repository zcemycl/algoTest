
class Solution:
    @staticmethod 
    def merge(a,b):
        i,j = 0,0
        result = []
        while i<len(a) and j<len(b):
            if (a[i]>b[j]):
                result.append(b[j])
                j+=1
            else:
                result.append(a[i])
                i+=1
        if i<len(a):
            result += a[i:]
        if j<len(b):
            result += b[j:]
        return result

    @staticmethod
    def naive(nums):
        if len(nums)<=1: return nums
        n = len(nums)//2
        L,R = nums[:n],nums[n:]
        L = Solution.naive(L)
        R = Solution.naive(R)
        nums = Solution.merge(L,R)
        return nums
