class Solution:
    @staticmethod
    def naive(rowIndex):
        if rowIndex==0: return [1]
        if rowIndex==1: return [1,1]
        prev = [1,1]
        for i in range(2,rowIndex+1):
            res = [1]
            prevEle = 1
            for j in range(1,i):
                curEle = prev[j]
                res.append(prevEle+curEle)
                prevEle = curEle
            res.append(1)
            prev=res
        return res