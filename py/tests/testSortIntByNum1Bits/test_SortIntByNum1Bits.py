
import unittest
from parameterized import parameterized as p
from solns.sortIntByNum1Bits.sortIntByNum1Bits import *

class UnitTest_SortIntByNum1Bits(unittest.TestCase):
    @p.expand([
        [[0,1,2,3,4,5,6,7,8],[0,1,2,4,8,3,5,6,7]],
        [[10000,10000],[10000,10000]],
        [[2,3,5,7,11,13,17,19],[2,3,5,17,7,11,13,19]],
        [[10,100,1000,10000],[10,100,10000,1000]]
    ])
    def test_naive(self,arr,expected):
        self.assertEqual(Solution.naive(arr),expected)
