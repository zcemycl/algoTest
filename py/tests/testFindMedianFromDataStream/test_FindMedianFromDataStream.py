import unittest
from parameterized import parameterized as p
from solns.findMedianFromDataStream.findMedianFromDataStream import *

class UnitTest_FindMedianFromDataStream(unittest.TestCase):
    @p.expand([
        [["MedianFinder","addNum","addNum","findMedian","addNum","findMedian"],
        [[],[1],[2],[],[3],[]],[None, None, None, 1.5, None, 2.0]],
        [["MedianFinder","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian"],
        [[],[6],[],[10],[],[2],[],[6],[],[5],[],[0],[],[6],[],[3],[],[1],[],[0],[],[0],[]],[None,None,6.00000,None,8.00000,None,6.00000,None,6.00000,None,6.00000,None,5.50000,None,6.00000,None,5.50000,None,5.00000,None,4.00000,None,3.00000]],
        [["MedianFinder","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian","addNum","findMedian"],
        [[],[40],[],[12],[],[16],[],[14],[],[35],[],[19],[],[34],[],[35],[],[28],[],[35],[],[26],[],[6],[],[8],[],[2],[],[14],[],[25],[],[25],[],[4],[],[33],[],[18],[],[10],[],[14],[],[27],[],[3],[],[35],[],[13],[],[24],[],[27],[],[14],[],[5],[],[0],[],[38],[],[19],[],[25],[],[11],[],[14],[],[31],[],[30],[],[11],[],[31],[],[0],[]],[None,None,40.00000,None,26.00000,None,16.00000,None,15.00000,None,16.00000,None,17.50000,None,19.00000,None,26.50000,None,28.00000,None,31.00000,None,28.00000,None,27.00000,None,26.00000,None,22.50000,None,19.00000,None,22.00000,None,25.00000,None,22.00000,None,25.00000,None,22.00000,None,19.00000,None,18.50000,None,19.00000,None,18.50000,None,19.00000,None,18.50000,None,19.00000,None,21.50000,None,19.00000,None,18.50000,None,18.00000,None,18.50000,None,19.00000,None,19.00000,None,19.00000,None,18.50000,None,19.00000,None,19.00000,None,19.00000,None,19.00000,None,19.00000]]
    ])
    def test_naive(self,operations,targets,expected):
        res = []
        s = Solution()
        for o,t in zip(operations,targets):
            tmp = None
            if o=="addNum":
                s.addNum(t[0])
            elif o=="findMedian":
                tmp = s.findMedian()
            res.append(tmp)
        self.assertEqual(res,expected)
