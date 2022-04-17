from collections import Counter
class Solution:
    @staticmethod
    def naive(s,t):
        if not t or not s:
            return ""
        eleT = Counter(t)
        required = len(eleT)
        l,r,satisfied = 0,0,0
        mem = {}
        res = float('inf'),None,None
        while r<len(s):
            c = s[r]
            mem[c]=mem.get(c,0)+1
            if c in eleT and mem[c]==eleT[c]:
                satisfied+=1
            
            while satisfied==required and l<=r:
                c = s[l]
                if r-l+1<res[0]:
                    res = (r-l+1,l,r)
                mem[c]-=1
                if c in eleT and mem[c] < eleT[c]:
                    satisfied -= 1
                l+=1
            r+=1
        return "" if res[0]==float('inf') else s[res[1]:res[2]+1]
