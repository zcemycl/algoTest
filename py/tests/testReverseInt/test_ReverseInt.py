
import unittest
from parameterized import parameterized as p
from solns.reverseInt.reverseInt import *

class UnitTest_ReverseInt(unittest.TestCase):
    @p.expand([
        [123,321],[-123,-321],[120,21],[0,0],
        [1123456789,0],[-1123456789,0]
    ])
    def test_naive(self,x,expected):
        self.assertEqual(Solution.naive(x),expected)
