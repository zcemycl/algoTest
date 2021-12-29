import unittest
from parameterized import parameterized as p
from solns.twoSumTestDome.twoSumTestDome import *

class UnitTest_TwoSumTestDome(unittest.TestCase):
    @p.expand([
        [[3, 1, 5, 7, 5, 9],10,(3,0)],
        [[3, 1, 5, 7, 5, 9],100,None]
    ])
    def test_naive(self,nums,target,expected):
        self.assertEqual(Solution.naive(nums,target),expected)
