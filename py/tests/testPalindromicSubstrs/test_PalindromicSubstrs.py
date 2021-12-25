import unittest
from parameterized import parameterized as p
from solns.palindromicSubstrs.palindromicSubstrs import *

class UnitTest_PalindromicSubstrs(unittest.TestCase):
    @p.expand([
        ["aaa",6],["abc",3]
    ])
    def test_naive(self,s,expected):
        soln = Solution()
        self.assertEqual(soln.naive(s),expected)
