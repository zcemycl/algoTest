class Solution:
    @staticmethod
    def naive(numRows):
        res = [[1],[1,1]]
        if numRows<=2:
            return res[:numRows]
        prev = [1,1]
        for row in range(2,numRows):
            curEle,cur = 1,[1]
            for j in range(1,row):
                nextEle = prev[j]
                cur.append(curEle+nextEle)
                curEle=nextEle
            cur.append(1)
            res.append(cur)
            prev = cur
        return res
        