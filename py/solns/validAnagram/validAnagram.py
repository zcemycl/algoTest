class Solution:
    @staticmethod
    def naive(s,t):
        return sorted(s)==sorted(t)
    @staticmethod
    def hash(s,t):
        hs,ht = {},{}
        for c in s:
            hs[c]=hs.get(c,0)+1
        for c in t:
            ht[c]=ht.get(c,0)+1
        for c in hs:
            if hs.get(c,0)!=ht.get(c,0): return False
        return True