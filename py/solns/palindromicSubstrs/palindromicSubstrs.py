class Solution:
    def __init__(self):
        self.res = []
    
    def naive(self,s):
        self.length = len(s)
        def loop(start,end):
            l,r = start,end
            while l>=0 and r<=self.length-1 and s[l]==s[r]:
                self.res.append(s[l:r+1])
                l-=1
                r+=1
        for i in range(self.length):
            loop(i,i)
            loop(i,i+1)
        return len(self.res)