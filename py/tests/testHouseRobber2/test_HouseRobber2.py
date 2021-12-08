import unittest
from parameterized import parameterized as p
from solns.houseRobber2.houseRobber2 import *

class UnitTest_HouseRobber2(unittest.TestCase):
    @p.expand([
        [[1,2,3,1],4],[[2,7,9,3,1],11],
        [[1,2],2],[[1,2,3],3],[[2,3,2],3],
        [[1],1]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
