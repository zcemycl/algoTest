import unittest
from parameterized import parameterized as p
from solns.consecutiveChars.consecutiveChars import *

class UnitTest_ConsecutiveChars(unittest.TestCase):
    @p.expand([
        ["leetcode",2],["abbcccddddeeeeedcba",5],
        ["triplepillooooow",5],["hooraaaaaaaaaaay",11],
        ["tourist",1]
    ])
    def test_naive(self,s,expected):
        self.assertEqual(Solution.naive(s),expected)
