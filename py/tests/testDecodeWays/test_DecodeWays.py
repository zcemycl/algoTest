import unittest
from parameterized import parameterized as p
from solns.decodeWays.decodeWays import *

class UnitTest_DecodeWays(unittest.TestCase):
    @p.expand([
        ["12",2],["226",3],["0",0],["06",0],
        ["441243",3],["10102030",0],["1020",1]
    ])
    def test_naive(self,s,expected):
        self.assertEqual(Solution.naive(s),expected)
    @p.expand([
        ["12",2],["226",3],["0",0],["06",0],
        ["441243",3],["10102030",0],["1020",1]
    ])
    def test_dynamic(self,s,expected):
        self.assertEqual(Solution.dpsolve(s),expected)
    @p.expand([
        ["12",2],["226",3],["0",0],["06",0],
        ["441243",3],["10102030",0],["1020",1]
    ])
    def test_dynamic2(self,s,expected):
        self.assertEqual(Solution.dpsolve2(s),expected)