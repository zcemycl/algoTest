class Solution:
    @staticmethod
    def naive(s):
        res,acc = 0,""
        for c in s:
            if c==" ":
                if acc!="":
                    res = len(acc)
                acc=""
            else:
                acc+=c
        if acc!="":
            res = len(acc)
        return res
