import unittest
from parameterized import parameterized as p
from solns.jumpGame.jumpGame import *

class UnitTest_JumpGame(unittest.TestCase):
    @p.expand([
        [[2,3,1,1,4],True],[[3,2,1,0,4],False],
        [[1],True],[[2,1],True],[[3,0,8,2,0,0,1],True],
    ])
    def test_dp(self,nums,expected):
        self.assertEqual(Solution.dp(nums),expected)
    @p.expand([
        [[2,3,1,1,4],True],[[3,2,1,0,4],False],
        [[1],True],[[2,1],True],[[3,0,8,2,0,0,1],True],
    ])
    def test_greedy(self,nums,expected):
        self.assertEqual(Solution.greedy(nums),expected)
