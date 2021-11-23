import os
current = os.path.dirname(os.path.realpath(__file__))
class Solution:
    @staticmethod
    def loadtxt2arr():
        result = []
        with open(current+'/QuickSort.txt','r') as f:
            for line in f.readlines():
                result.append(int(line.strip()))
        return result
    @staticmethod
    def policy(nums,l,r,mode="first"):
        if mode=="first":
            pass
        elif mode=="end":
            nums[l],nums[r-1]=nums[r-1],nums[l]
        elif mode=="med":
            n = l+(r-l-1)//2
            if min(nums[l],nums[r-1])<nums[n]<max(nums[l],nums[r-1]):
                n = n
            elif min(nums[n],nums[r-1])<nums[l]<max(nums[n],nums[r-1]):
                n = l
            else: 
                n = r-1
            nums[l],nums[n]=nums[n],nums[l]
        return nums
    @staticmethod
    def naive(nums,l,r,mode="first"):
        if r-l<=1: return nums,0
        i=l+1; count=r-l-1
        # choose pivot
        nums=Solution.policy(nums,l,r,mode)
        for j in range(l+1,r):
            if nums[l]>nums[j]:
                nums[i],nums[j]=nums[j],nums[i]
                i+=1
        nums[l],nums[i-1]=nums[i-1],nums[l]
        nums,cl = Solution.naive(nums,l,i-1,mode)
        nums,cr = Solution.naive(nums,i,r,mode)
        count+=(cl+cr)
        return nums,count