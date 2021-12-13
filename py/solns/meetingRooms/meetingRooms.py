class Solution:
    @staticmethod
    def naive(intervals):
        if len(intervals)<=1: return True
        intervals.sort(key=lambda x:x[0])
        prev = intervals[0][1]
        for s,e in intervals[1:]:
            if prev>s:
                return False
            prev = e
        return True