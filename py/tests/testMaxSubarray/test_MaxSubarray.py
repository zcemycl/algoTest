
import unittest
from parameterized import parameterized as p
from solns.maxSubarray.maxSubarray import *

class UnitTest_MaxSubarray(unittest.TestCase):
    @p.expand([
        [[-2,1,-3,4,-1,2,1,-5,4],6],[[1],1],[[5,4,-1,7,8],23]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
