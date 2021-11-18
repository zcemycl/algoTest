
import unittest
from parameterized import parameterized as p
from solns.climbingStairs.climbingStairs import *

class UnitTest_ClimbingStairs(unittest.TestCase):
    @p.expand([
        [2,2],[3,3],[4,5],[5,8]
    ])
    def test_naive(self,n,expected):
        self.assertEqual(Solution.naive(n),expected)
        self.assertEqual(Solution.dp(n),expected)
        self.assertEqual(Solution.formula(n),expected)