import unittest
from parameterized import parameterized as p
from solns.threeSum.threeSum import *

class UnitTest_ThreeSum(unittest.TestCase):
    @p.expand([
        [[-1,0,1,2,-1,-4],[[-1,-1,2],[-1,0,1]]],
        [[],[]],[[0],[]],[[-1,-1,2],[[-1,-1,2]]]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
