import unittest
from parameterized import parameterized as p
from solns.nonOverlappingIntervals.nonOverlappingIntervals import *

class UnitTest_NonOverlappingIntervals(unittest.TestCase):
    @p.expand([
        [[[1,2],[2,3],[3,4],[1,3]],1],
        [[[1,2],[1,2],[1,2]],2],
        [[[1,2],[2,3]],0],
        [[[0,2],[1,3],[2,4],[3,5],[4,6]],2]
    ])
    def test_naive(self,intervals,expected):
        self.assertEqual(Solution.naive(intervals),expected)
