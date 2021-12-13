class Solution:
    @staticmethod
    def naive(intervals):
        intervals.sort(key=lambda x:x[0])
        count = 0
        prev = intervals[0][1]
        for i in range(1,len(intervals)):
            if prev>intervals[i][0]:
                count+=1 
                prev = min(prev,intervals[i][1])
            else:
                prev = intervals[i][1]
        return count