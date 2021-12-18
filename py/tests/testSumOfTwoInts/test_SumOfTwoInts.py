import unittest
from parameterized import parameterized as p
from solns.sumOfTwoInts.sumOfTwoInts import *

class UnitTest_SumOfTwoInts(unittest.TestCase):
    @p.expand([
        [1,2,3],[2,3,5],[-2,5,3],[0,0,0]
    ])
    def test_naive(self,a,b,expected):
        self.assertEqual(Solution.naive(a,b),expected)
