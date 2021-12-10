import unittest
from parameterized import parameterized as p
from solns.longestConsecutiveSeq.longestConsecutiveSeq import *

class UnitTest_LongestConsecutiveSeq(unittest.TestCase):
    @p.expand([
        [[100,4,200,1,3,2],4],[[0,3,7,2,5,8,4,6,0,1],9]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
