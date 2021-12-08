
import unittest
from parameterized import parameterized as p
from solns.longestIncreasingSubseq.longestIncreasingSubseq import *

class UnitTest_LongestIncreasingSubseq(unittest.TestCase):
    @p.expand([
        [[10,9,2,5,3,7,101,18],4],[[0,1,0,3,2,3],4],
        [[7,7,7,7],1],[[1,2,4,3],3],[[4,10,4,3,8,9],3]
    ])
    def test_dp(self,nums,expected):
        self.assertEqual(Solution.dp(nums),expected)
    @p.expand([
        # [[10,9,2,5,3,7,101,18],4], 
        [[0,1,0,3,2,3],4],
        [[7,7,7,7],1],[[1,2,4,3],3],[[4,10,4,3,8,9],3]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)