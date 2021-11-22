import unittest
from parameterized import parameterized as p
from solns.countInversions.countInversions import *

class UnitTest_CountInversions(unittest.TestCase):
    @p.expand([
        [[4,3,2,1],6],[[5,4,3,2,1],10],
        [[2,3,1],2]
    ])
    def test_naive(self,nums,expected):
        arr,count = Solution.naive(nums)
        self.assertEqual(count,expected)
    def test_long(self):
        arr = Solution.loadtxt2arr()
        arr,count = Solution.naive(arr)
        self.assertEqual(count,2407905288)