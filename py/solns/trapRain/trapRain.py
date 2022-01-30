class Solution:
    @staticmethod
    def naive(height):
        l,high = [],0
        for h in height:
            l.append(high)
            high=max(high,h)
        r,high = [],0
        for h in reversed(height):
            r=[high]+r
            high=max(high,h)
        res = 0
        for i,h in enumerate(height):
            res+=max(0,min(l[i],r[i])-h)
        return res
