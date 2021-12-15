import unittest
from parameterized import parameterized as p
from solns.subsets.subsets import *

class UnitTest_Subsets(unittest.TestCase):
    @p.expand([
        [[1,2,3],[[],[1],[1,2],[1,2,3],[1,3],[2],[2,3],[3]]],
        [[0],[[],[0]]]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
