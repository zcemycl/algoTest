import unittest
from parameterized import parameterized as p
from solns.uniquePaths.uniquePaths import *

class UnitTest_UniquePaths(unittest.TestCase):
    @p.expand([
        [3,7,28],[3,2,3],[7,3,28],[3,3,6]
    ])
    def test_naive(self,m,n,expected):
        self.assertEqual(Solution.naive(m,n),expected)
