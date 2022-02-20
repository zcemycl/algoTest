class Solution:
    @staticmethod
    def naive(intervals):
        intervals.sort(key=lambda x:(x[0],-x[1]))
        n = len(intervals)
        res,cur = 1,intervals[0]
        for i in range(1,n):
            if cur[0]<=intervals[i][0] and intervals[i][1]<=cur[1]:
                pass
            else:
                res+=1
                cur = intervals[i]
        return res