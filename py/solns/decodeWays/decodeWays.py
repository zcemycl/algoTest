class Solution:
    @staticmethod
    def naive(s):
        res = set()
        def dfs(i,acum):
            if i>len(s)-1: 
                res.add(repr(acum))
                return
            if s[i]=="0": return
            if 0<int(s[i:i+2])<27: 
                dfs(i+2,acum+[s[i:i+2]])
            dfs(i+1,acum+[s[i]])
        dfs(0,[])
        return len(res)
    @staticmethod
    def dpsolve(s):
        dp = {len(s):1}
        def dfs(i):
            if i in dp: return dp[i]
            if s[i]=="0": return 0 
            res = dfs(i+1)
            if (i+1<len(s) and (s[i]=="1" or \
                s[i]=="2" and s[i+1] in "0123456")):
                res += dfs(i+2)
            dp[i] = res
            return res 
        return dfs(0)
    @staticmethod
    def dpsolve2(s):
        dp = {len(s):1}
        for i in range(len(s)-1,-1,-1):
            if s[i]=="0": 
                dp[i]=0
            else:
                dp[i]=dp[i+1]
            if (i+1<len(s) and (s[i]=="1" or \
                s[i]=="2" and s[i+1] in "0123456")):
                dp[i]+=dp[i+2]
        return dp[0]