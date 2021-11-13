
import unittest
from parameterized import parameterized as p
from solns.findNuniqueIntSum2Zero.findNuniqueIntSum2Zero import *

class UnitTest_FindNuniqueIntSum2Zero(unittest.TestCase):
    @p.expand([
        [5,[0,1,-1,2,-2]],
        [3,[0,1,-1]],[1,[0]]
    ])
    def test_naive(self,n,expected):
        self.assertEqual(Solution.naive(n),expected)