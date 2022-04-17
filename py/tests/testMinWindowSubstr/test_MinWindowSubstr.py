
import unittest
from parameterized import parameterized as p
from solns.minWindowSubstr.minWindowSubstr import *

class UnitTest_MinWindowSubstr(unittest.TestCase):
    @p.expand([
        ["ADOBECODEBANC","ABC","BANC"],
        ["a","a","a"],["a","aa",""],
        ["CCABAB","ABC","CAB"]
    ])
    def test_naive(self,s,t,expected):
        self.assertEqual(Solution.naive(s,t),expected)
