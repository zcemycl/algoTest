class Solution:
    @staticmethod
    def naive(nums):
        L = len(nums)
        def swap(nums,i,j):
            nums[i],nums[j]=nums[j],nums[i]
        def reverse(nums,start):
            l,r=start,len(nums)-1
            while l<r:
                swap(nums,l,r)
                l+=1
                r-=1
        i = L-2
        while i>=0 and nums[i+1]<=nums[i]:
            i-=1
        if i>=0:
            j = L-1
            while nums[j]<=nums[i]:
                j-=1
            swap(nums,i,j)
        reverse(nums,i+1)
