
class Solution:
    @staticmethod
    def naive(arr):
        d  = dict()
        for i in range(len(arr)):
            if arr[i] not in d:
                d[arr[i]]=1
            else:
                d[arr[i]]+=1 
        try:
            result = list(max(filter(lambda x:x[0]==x[1],d.items())))[0]
        except:
            result = -1
        return result
