
import unittest
from parameterized import parameterized as p
from solns.validParentheses.validParentheses import *

class UnitTest_ValidParentheses(unittest.TestCase):
    @p.expand([
        ["()",True],["()[]{}",True],["(]",False],
        ["([)]",False],["{[]}",True]
    ])
    def test_naive(self,s,expected):
        self.assertEqual(Solution.naive(s),expected)
