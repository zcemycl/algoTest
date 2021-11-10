
class Solution:
    @staticmethod
    def naive(arr):
        i = 0
        origLen = len(arr)
        while i<origLen:
            if arr[i]==0:
                arr.pop()
                arr.insert(i,0)
                i+=1
            i+=1
        # return arr
