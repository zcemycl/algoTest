
class Solution:
    @staticmethod
    def naive(height):
        l,r = 0,len(height)-1
        maxV = min(height[l],height[r])*r
        while l<r:
            if height[l]>=height[r]:
                r-=1
            else: l+=1
            maxV = max(maxV,min(height[l],height[r])*(r-l))
        return maxV
