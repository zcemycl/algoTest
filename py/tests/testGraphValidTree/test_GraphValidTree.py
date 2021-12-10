import unittest
from parameterized import parameterized as p
from solns.graphValidTree.graphValidTree import *

class UnitTest_GraphValidTree(unittest.TestCase):
    @p.expand([
        [5,[[0,1],[0,2],[0,3],[1,4]],True],
        [5,[[0,1],[1,2],[2,3],[1,3],[1,4]],False],
        [2,[[1,0]],True],
        [3,[[2,0],[2,1]],True]
    ])
    def test_naive(self,n,edges,expected):
        self.assertEqual(Solution.naive(n,edges),expected)
