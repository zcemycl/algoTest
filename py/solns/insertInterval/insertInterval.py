
class Solution:
    @staticmethod
    def naive(intervals,newInterval):
        res = []
        for i,interval in enumerate(intervals):
            if interval[0]<=newInterval[1] and \
                interval[1]>=newInterval[0]:
                newInterval = [min(interval[0],newInterval[0]),\
                    max(interval[1],newInterval[1])]
            else:
                if interval[0]>newInterval[0] and interval[0]>newInterval[1]:
                    res.append(newInterval)
                    return res+intervals[i:]
                elif newInterval[0]>interval[0]and newInterval[0]>interval[1]:
                    res.append(interval)
        res.append(newInterval)
        return res
