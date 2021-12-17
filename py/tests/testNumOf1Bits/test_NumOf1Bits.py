import unittest
from parameterized import parameterized as p
from solns.numOf1Bits.numOf1Bits import *

class UnitTest_NumOf1Bits(unittest.TestCase):
    @p.expand([
        [11,3],[128,1],[4294967293,31]
    ])
    def test_naive(self,n,expected):
        self.assertEqual(Solution.naive(n),expected)
