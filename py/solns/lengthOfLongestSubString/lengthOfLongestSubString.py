from solns.wrapper import *

class Solution:
    @staticmethod
    def naive(string):
        maxLen = 0
        tmp = []
        for i in range(len(string)):
            if string[i] not in tmp:
                tmp.append(string[i])
            else:
                tmpind = tmp.index(string[i])
                tmp = tmp[tmpind+1:]
                tmp.append(string[i])
            if len(tmp) > maxLen:
                maxLen = len(tmp)
        return maxLen
    @staticmethod
    def slidingWindows(s):
        i,j,maxVal = 0,0,0
        visited = set()
        while j<len(s):
            if s[j] not in visited:
                visited.add(s[j])
                j+=1
            else:
                visited.remove(s[i])
                i+=1
            maxVal = max(maxVal,len(visited))
        return maxVal