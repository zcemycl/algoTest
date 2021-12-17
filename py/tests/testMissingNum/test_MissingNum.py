import unittest
from parameterized import parameterized as p
from solns.missingNum.missingNum import *

class UnitTest_MissingNum(unittest.TestCase):
    @p.expand([
        [[3,0,1],2],[[0,1],2],[[9,6,4,2,3,5,7,0,1],8],
        [[0],1]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
    @p.expand([
        [[3,0,1],2],[[0,1],2],[[9,6,4,2,3,5,7,0,1],8],
        [[0],1]
    ])
    def test_xor(self,nums,expected):
        self.assertEqual(Solution.xor(nums),expected)
