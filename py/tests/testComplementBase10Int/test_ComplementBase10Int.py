
import unittest
from parameterized import parameterized as p
from solns.complementBase10Int.complementBase10Int import *

class UnitTest_ComplementBase10Int(unittest.TestCase):
    @p.expand([
        [5,2],[7,0],[10,5]
    ])
    def test_naive(self,n,expected):
        self.assertEqual(Solution.naive(n),expected)
