import unittest
from parameterized import parameterized as p
from solns.decodeStr.decodeStr import *

class UnitTest_DecodeStr(unittest.TestCase):
    @p.expand([
        ["3[a]2[bc]","aaabcbc"],["3[a2[c]]","accaccacc"],
        ["2[abc]3[cd]ef","abcabccdcdcdef"],
        ["abc3[cd]xyz","abccdcdcdxyz"],
        ["3[a2[c]e1[c]]","accecaccecaccec"]
    ])
    def test_naive(self,s,expected):
        self.assertEqual(Solution.naive(s),expected)
