import unittest
from parameterized import parameterized as p
from solns.numOfConnectedComponentsInUndirectedGraph.numOfConnectedComponentsInUndirectedGraph import *

class UnitTest_NumOfConnectedComponentsInUndirectedGraph(unittest.TestCase):
    @p.expand([
        [5,[[0,1],[1,2],[3,4]],2],
        [5,[[0,1],[1,2],[2,3],[3,4]],1]
    ])
    def test_naive(self,n,edges,expected):
        self.assertEqual(Solution.naive(n,edges),expected)
