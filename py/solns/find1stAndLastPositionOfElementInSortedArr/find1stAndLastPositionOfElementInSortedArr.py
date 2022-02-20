class Solution:
    @staticmethod
    def naive(nums,target):
        def findBound(nums,target,isUp):
            n = len(nums)
            l,r,m = 0,n-1,0
            while l<=r:
                m = (l+r)//2
                if nums[m]==target:
                    if isUp:
                        if m==l or nums[m-1]<target:
                            return m
                        r = m-1
                    else:
                        if m==r or nums[m+1]>target:
                            return m
                        l = m+1
                elif nums[m]>target:
                    r = m-1
                else:
                    l = m+1
            return -1
        l = findBound(nums,target,True)
        if l==-1: return [-1,-1]
        r = findBound(nums,target,False)
        return [l,r]