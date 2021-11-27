from solns.graph.graph import *
import unittest
from parameterized import parameterized as p
from solns.bfsConnectivity.bfsConnectivity import *

class UnitTest_BfsConnectivity(unittest.TestCase):
    G = Graph()
    G.addEdges(0,[2,4])
    G.addEdges(2,[0,4])
    G.addEdges(4,[0,2,6,8])
    G.addEdge(6,4)
    G.addEdge(8,4)
    G.addEdge(1,3)
    G.addEdge(3,1)
    G.addEdges(5,[7,9])
    G.addEdges(7,[5,9])
    G.addEdges(9,[7,5])
    @p.expand([
        []
    ])
    def test_naive(self):
        G = self.G.graph
        group = Solution.naive(G)
        self.assertEqual(len(group),3)
