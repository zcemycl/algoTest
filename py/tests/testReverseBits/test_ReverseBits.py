import unittest
from parameterized import parameterized as p
from solns.reverseBits.reverseBits import *

class UnitTest_ReverseBits(unittest.TestCase):
    @p.expand([
        [43261596,964176192],[4294967293,3221225471]
    ])
    def test_naive(self,n,expected):
        self.assertEqual(Solution.naive(n),expected)
