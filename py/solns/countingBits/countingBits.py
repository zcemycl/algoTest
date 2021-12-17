class Solution:
    @staticmethod
    def naive(n):
        res = []
        for i in range(n+1):
            res.append(bin(i).count("1"))
        return res
    @staticmethod
    def bitwise(n):
        res = [0]*(n+1)
        for i in range(1,n+1):
            res[i]=res[i&(i-1)]+1
        return res
        
