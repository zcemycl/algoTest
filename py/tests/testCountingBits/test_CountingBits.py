import unittest
from parameterized import parameterized as p
from solns.countingBits.countingBits import *

class UnitTest_CountingBits(unittest.TestCase):
    @p.expand([
        [2,[0,1,1]],[5,[0,1,1,2,1,2]]
    ])
    def test_naive(self,n,expected):
        self.assertEqual(Solution.naive(n),expected)
    @p.expand([
        [2,[0,1,1]],[5,[0,1,1,2,1,2]]
    ])
    def test_bitwise(self,n,expected):
        self.assertEqual(Solution.bitwise(n),expected)