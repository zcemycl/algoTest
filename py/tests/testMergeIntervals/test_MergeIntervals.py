
import unittest
from parameterized import parameterized as p
from solns.mergeIntervals.mergeIntervals import *

class UnitTest_MergeIntervals(unittest.TestCase):
    @p.expand([
        [[[1,3],[2,6],[8,10],[15,18]],[[1,6],[8,10],[15,18]]],
        [[[1,4],[4,5]],[[1,5]]]
    ])
    def test_naive(self,intervals,expected):
        self.assertEqual(Solution.naive(intervals),expected)
