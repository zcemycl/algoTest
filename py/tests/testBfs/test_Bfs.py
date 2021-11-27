from solns.graph.graph import *
import unittest
from parameterized import parameterized as p
from solns.bfs.bfs import *

class UnitTest_Bfs(unittest.TestCase):
    G = Graph()
    G.addEdges(0,[1,2])
    G.addEdges(1,[0,3])
    G.addEdges(2,[3,4])
    G.addEdges(3,[1,2,4,5])
    G.addEdges(4,[2,3,5])
    G.addEdges(5,[3,4])
    @p.expand([
        [0,"012345"],[3,"312450"],[1,"103245"]
    ])
    def test_naive(self,s,expected):
        G = self.G.graph
        seq = Solution.naive(G,s)
        self.assertEqual(seq,expected)
