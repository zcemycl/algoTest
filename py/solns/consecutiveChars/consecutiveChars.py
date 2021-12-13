class Solution:
    @staticmethod
    def naive(s):
        maxVal,count=1,1
        prev=s[0]
        for i in range(1,len(s)):
            if s[i]==prev:
                count+=1
            else:
                prev=s[i]
                count=1
            maxVal=max(maxVal,count)
        return maxVal