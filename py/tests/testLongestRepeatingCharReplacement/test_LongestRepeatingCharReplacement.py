import unittest
from parameterized import parameterized as p
from solns.longestRepeatingCharReplacement.longestRepeatingCharReplacement import *

class UnitTest_LongestRepeatingCharReplacement(unittest.TestCase):
    @p.expand([
        ["ABAB",2,4],["AABABBA",1,4]
    ])
    def test_naive(self,s,k,expected):
        self.assertEqual(Solution.naive(s,k),expected)
