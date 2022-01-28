from collections import Counter
class Solution:
    def naive(self,s):
        c = Counter(s)
        d = {0:"zero",1:"one",2:"two",3:"three",4:"four",
            5:"five",6:"six",7:"seven",8:"eight",9:"nine"}
        def isCommon(a,b):
            return all(a[x]>=b[x] for x in b)
        def dfs(count,acc,start):
            if len(count)==0:
                self.res = acc
                return 
            for i in range(start,10):
                tmp = count.copy()
                tmpc = Counter(d[i])
                if isCommon(tmp,tmpc):
                    tmp-=tmpc
                    dfs(tmp,acc+str(i),i)
                else:
                    pass
        dfs(c,"",0)
        return self.res
    def strategy(self,s):
        c = Counter(s)
        keyidr={0:("z","zero"),1:("o","one"),
               2:("w","two"),3:("t","three"),
               4:("u","four"),5:("f","five"),
               6:("x","six"),7:("s","seven"),
               8:("g","eight"),9:("i","nine")}
        decodeSeq=[0,2,4,6,8,3,5,7,1,9]
        res = {}
        for i in decodeSeq:
            key,name = keyidr[i]
            count = c[key]
            res[i]=res.get(i,0)+count
            tmpCounter = Counter(name)
            for j in range(count):
                c-=tmpCounter
        resStr = ""
        for i in range(10):
            resStr+=res[i]*str(i)
        return resStr