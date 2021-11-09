class Solution:
    @staticmethod
    def naive(s):
        d = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        prev = "I"
        value = 0
        for i in range(len(s)):
            tmps = s[-i-1]
            if d[prev]>d[tmps]:
                value -= d[tmps]
            else:
                value += d[tmps]
            prev = tmps
        return value