import unittest
from parameterized import parameterized as p
from solns.permutations.permutations import *

class UnitTest_Permutations(unittest.TestCase):
    @p.expand([
        [[1,2,3],[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]],
        [[0,1],[[0,1],[1,0]]],
        [[1],[[1]]],[[23,53],[[23,53],[53,23]]]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
