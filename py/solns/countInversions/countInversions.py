import os
current = os.path.dirname(os.path.realpath(__file__))
class Solution:
    @staticmethod
    def loadtxt2arr():
        result = []
        with open(current+'/IntegerArray.txt','r') as f:
            for line in f.readlines():
                result.append(int(line.strip()))
        return result
    @staticmethod
    def merge(a,b):
        i,j=0,0
        result = []
        count = 0
        while i<len(a) and j<len(b):
            if a[i]>b[j]:
                result.append(b[j])
                j+=1
                count+=(len(a)-i)
            else:
                result.append(a[i])
                i+=1
        if i<len(a):
            result += a[i:]
        if j<len(b):
            result += b[j:]
        return result,count
    @staticmethod
    def naive(nums):
        if len(nums) <= 1: return nums,0
        n = len(nums)//2
        L,cL = Solution.naive(nums[:n])
        R,cR = Solution.naive(nums[n:])
        nums,c = Solution.merge(L,R)
        return nums,cL+cR+c