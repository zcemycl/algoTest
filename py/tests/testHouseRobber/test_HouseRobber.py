import unittest
from parameterized import parameterized as p
from solns.houseRobber.houseRobber import *

class UnitTest_HouseRobber(unittest.TestCase):
    @p.expand([
        [[1,2,3,1],4],[[2,7,9,3,1],12],[[1,2],2]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums), expected)
    @p.expand([
        [[1,2,3,1],4],[[2,7,9,3,1],12],[[1,2],2]
    ])
    def test_2max(self,nums,expected):
        self.assertEqual(Solution.twomax(nums), expected)