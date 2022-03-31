
class Solution:
    def naive(self,text1,text2):
        if len(text1)==0 or len(text2)==0: return 0
        self.l1,self.l2 = len(text1),len(text2)
        self.Len = 0
        def recur(i,j,acc):
            if i==self.l1 or j==self.l2:
                # print(acc)
                self.Len = max(self.Len,acc)
                return
            if text1[i]==text2[j]:
                acc+=1
                recur(i+1,j+1,acc)
                acc-=1
            recur(i,j+1,acc)
            recur(i+1,j,acc)
        recur(0,0,0)
        return self.Len
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