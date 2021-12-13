class Solution:
    @staticmethod
    def naive(intervals):
        if len(intervals)<=1: return len(intervals)
        ss,es = tuple(map(list,zip(*intervals)))
        ss.sort()
        es.sort()
        si,ei,count,maxVal = 0,0,0,0
        while si<len(ss) and ei<len(es):
            if ss[si]<es[ei]:
                count+=1
                si+=1
            else:
                count-=1
                ei+=1
            maxVal = max(maxVal,count)
        return maxVal