import unittest
from parameterized import parameterized as p
from solns.validPalindrome.validPalindrome import *

class UnitTest_ValidPalindrome(unittest.TestCase):
    @p.expand([
        ["A man, a plan, a canal: Panama",True],
        ["race a car",False],[" ",True],["0P",False]
    ])
    def test_naive(self,s,expected):
        self.assertEqual(Solution.naive(s),expected)
