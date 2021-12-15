import unittest
from parameterized import parameterized as p
from solns.subsets2.subsets2 import *

class UnitTest_Subsets2(unittest.TestCase):
    @p.expand([
        [[1,2,2],[[],[1],[1,2],[1,2,2],[2],[2,2]]],
        [[0],[[],[0]]]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)