
class Solution:
    @staticmethod
    def naive(text1,text2):
        if len(text1)==0 or len(text2)==0: return 0
        Len = 0
        for k in range(len(text1)):
            tmpLen = 0
            bookmark = 0
            tmpStr = ""
            for i,c1 in enumerate(text1[k:]):
                for j,c2 in enumerate(text2[bookmark:]):
                    if c1==c2:
                        tmpStr+=c1
                        tmpLen+=1
                        bookmark += j+1
                        break
            Len = max(Len,tmpLen)
        return Len
    @staticmethod
    def dfs(text1,text2,acum,i):
        pass
    @staticmethod
    def dp(text1,text2):
        dpl=[[0 for j in range(len(text2)+1)] for i in range(len(text1)+1)]
        for i in range(len(text1)-1,-1,-1):
            for j in range(len(text2)-1,-1,-1):
                if text1[i]==text2[j]:
                    dpl[i][j] = 1+dpl[i+1][j+1]
                else:
                    dpl[i][j] = max(dpl[i][j+1],dpl[i+1][j])
        return dpl[0][0]