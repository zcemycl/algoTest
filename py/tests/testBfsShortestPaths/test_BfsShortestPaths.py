from solns.graph.graph import *
import unittest
from parameterized import parameterized as p
from solns.bfsShortestPaths.bfsShortestPaths import *

class UnitTest_BfsShortestPaths(unittest.TestCase):
    G = Graph()
    G.addEdges(0,[1,2])
    G.addEdges(1,[0,3])
    G.addEdges(2,[0,3,4])
    G.addEdges(3,[1,2,4,5])
    G.addEdges(4,[2,3,5])
    G.addEdges(5,[3,4])
    @p.expand([
        [0,[0,1,1,2,2,3]],[3,[2,1,1,0,1,1]],[1,[1,0,2,1,2,2]]
    ])
    def test_naive(self,s,expected):
        G = self.G.graph
        d = Solution.naive(G,s)
        self.assertEqual(d,expected)
