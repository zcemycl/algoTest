import unittest
from parameterized import parameterized as p
from solns.combinations.combinations import *

class UnitTest_Combinations(unittest.TestCase):
    @p.expand([
        [4,2,[[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]],
        [1,1,[[1]]]
    ])
    def test_naive(self,n,k,expected):
        self.assertEqual(Solution.naive(n,k),expected)
