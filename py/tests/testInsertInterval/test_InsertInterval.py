
import unittest
from parameterized import parameterized as p
from solns.insertInterval.insertInterval import *

class UnitTest_InsertInterval(unittest.TestCase):
    @p.expand([
        [[[1,3],[6,9]],[2,5],[[1,5],[6,9]]],
        [[[1,2],[3,5],[6,7],[8,10],[12,16]],[4,8],[[1,2],[3,10],[12,16]]],
        [[],[5,7],[[5,7]]],[[[1,5]],[2,3],[[1,5]]],
        [[[1,5]],[2,7],[[1,7]]]
    ])
    def test_naive(self,intervals,newInterval,expected):
        self.assertEqual(Solution.naive(intervals,
            newInterval),expected)
