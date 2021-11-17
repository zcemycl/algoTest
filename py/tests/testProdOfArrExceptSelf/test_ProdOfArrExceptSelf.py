
import unittest
from parameterized import parameterized as p
from solns.prodOfArrExceptSelf.prodOfArrExceptSelf import *

class UnitTest_ProdOfArrExceptSelf(unittest.TestCase):
    @p.expand([
        [[1,2,3,4],[24,12,8,6]],[[-1,1,0,-3,3],[0,0,9,0,0]]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
