import unittest
from parameterized import parameterized as p
from solns.longestPalindromicSubstr.longestPalindromicSubstr import *

class UnitTest_LongestPalindromicSubstr(unittest.TestCase):
    @p.expand([
        ["babad","bab"],["cbbd","bb"]
    ])
    def test_naive(self,s,expected):
        soln = Solution()
        self.assertEqual(soln.naive(s),expected)
