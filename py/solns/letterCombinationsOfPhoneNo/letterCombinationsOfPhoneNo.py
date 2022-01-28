class Solution:
    @staticmethod
    def naive(digits):
        res = []
        d = {"2":"abc","3":"def","4":"ghi","5":"jkl",
            "6":"mno","7":"pqrs","8":"tuv","9":"wxyz"}
        def dfs(prev,i):
            if len(digits)==0:
                return
            if i==len(digits):
                res.append(prev)
                return
            for c in d[digits[i]]:
                dfs(prev+c,i+1)
        dfs("",0)
        return res
