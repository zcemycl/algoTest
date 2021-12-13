class Solution:
    @staticmethod
    def naive(s,k):
        i,maxVal = 0,0
        store = dict()
        for j in range(len(s)):
            store[s[j]]=store.get(s[j],0)+1
            while k<j-i+1-max(store.values()):
                store[s[i]]=store.get(s[i],0)-1
                i+=1
            maxVal = max(maxVal,j-i+1)
        return maxVal