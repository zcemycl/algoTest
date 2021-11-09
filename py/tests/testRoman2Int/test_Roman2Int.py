import unittest
from parameterized import parameterized as p
from solns.roman2Int.roman2Int import *

class TestRomain2Int(unittest.TestCase):
    @p.expand([
        ["III",3],["IV",4],["IX",9],["LVIII",58],["MCMXCIV",1994]
    ])
    def test_naive(self,s,expected):
        self.assertEqual(Solution.naive(s),expected)