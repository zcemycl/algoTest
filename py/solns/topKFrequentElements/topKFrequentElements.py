from collections import defaultdict
class Solution:
    @staticmethod
    def naive(nums,k):
        d = dict()
        for n in nums:
            d[n] = d.get(n,0)+1
        c = defaultdict(list)
        for n in d:
            c[d[n]].append(n)
        res = []
        start = len(nums)
        while k!=0:
            tmp = c[start]
            if len(tmp)!=0:
                res+=c[start]
                k-=len(tmp)
            start-=1
        return res
