
class Solution:
    @staticmethod
    def naive(s,wordDict):
        return Solution.dfs(s,wordDict,0)
    @staticmethod
    def dfs(s,wordDict,i):
        if i==len(s):return True
        res = False
        for word in wordDict:
            if s[i:i+len(word)]==word:
                tmpres = Solution.dfs(s,wordDict,i+len(word))
                res = max(res,tmpres)
        return res
    @staticmethod
    def dp(s,wordDict):
        dpl = [False]*(len(s)+1)
        dpl[-1] = True
        for i in range(len(s)-1,-1,-1):
            for word in wordDict:
                if s[i:i+len(word)]==word:
                    dpl[i]=max(dpl[i],dpl[i+len(word)])
        return dpl[0]