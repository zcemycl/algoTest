
import unittest
from parameterized import parameterized as p
from solns.maxProdSubarray.maxProdSubarray import *

class UnitTest_MaxProdSubarray(unittest.TestCase):
    @p.expand([
        [[2,3,-2,4],6],[[-2,0,-1],0]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
