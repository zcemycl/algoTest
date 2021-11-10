
class Solution:
    @staticmethod
    def naive(nums):
        d = dict()
        for i in nums:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        d = dict(filter(lambda x:x[1]==2,d.items()))
        return list(d.keys())
