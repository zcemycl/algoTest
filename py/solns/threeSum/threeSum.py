class Solution:
    @staticmethod
    def twoSum2Sorted(nums,i,res,previ):
        l,r=i+1,len(nums)-1
        if nums[i]!=previ:
            prevj = None
            while l<r:
                tmp = nums[l]+nums[r]
                if tmp>-nums[i]:
                    r-=1
                elif tmp<-nums[i]:
                    l+=1
                elif tmp==-nums[i]:
                    if nums[l]!=prevj:
                        res.append([nums[i],nums[l],nums[r]])
                    prevj = nums[l]
                    l+=1
    @staticmethod
    def naive(nums):
        
        nums.sort()
        res = []; i=0; previ = None
        while i<len(nums)-2:
            if nums[i]>0:
                break
            Solution.twoSum2Sorted(nums,i,res,previ)
            previ = nums[i]
            i+=1
        return res