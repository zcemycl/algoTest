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