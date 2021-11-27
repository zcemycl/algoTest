from solns.graph.graph import *
import unittest
from parameterized import parameterized as p
from solns.dfs.dfs import *

class UnitTest_Dfs(unittest.TestCase):
    G = Graph()
    G.addEdges(0,[1,2])
    G.addEdges(1,[0,3])
    G.addEdges(2,[0,4])
    G.addEdges(3,[1,5])
    G.addEdges(4,[2,5])
    G.addEdges(5,[3,4])
    @p.expand([
        [0,"013542"],[3,"310245"],[1,"102453"]
    ])
    def test_naive(self,s,expected):
        G = self.G.graph
        seq = Solution.naive(G,s,set(),"")
        self.assertEqual(seq,expected)
