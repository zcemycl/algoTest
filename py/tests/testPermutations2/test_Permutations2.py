import unittest
from parameterized import parameterized as p
from solns.permutations2.permutations2 import *

class UnitTest_Permutations2(unittest.TestCase):
    @p.expand([
        [[1,1,2],[[1,1,2],[1,2,1],[2,1,1]]],
        [[1,2,3],[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums), expected)
