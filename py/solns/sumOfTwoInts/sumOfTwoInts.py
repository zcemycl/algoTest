class Solution:
    @staticmethod
    def naive(a,b):
        x,y = abs(a),abs(b)
        if x<y:
            return Solution.naive(b,a)
        sign = 1 if a>0 else -1
        if a*b>=0:
            while y:
                x,y = x^y,(x&y)<<1
        else:
            while y:
                x,y = x^y,((~x)&y)<<1
        return x*sign
