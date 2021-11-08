from solns.isPalindrome.isPalindrome import *
import unittest
from parameterized import parameterized as p

class TestIsPalindrome(unittest.TestCase):
    @p.expand([
        [121,True],[-121,False],[10,False],[-101,False],[0,True]
    ])
    def test_naive_isPalindrome(self,inp,expected):
        self.assertEqual(Solution.naive(inp),expected)