from solns.graph.graph import *
import unittest
from parameterized import parameterized as p
from solns.topologicalSort.topologicalSort import *

class UnitTest_TopologicalSort(unittest.TestCase):
    G = Graph()
    G.addEdges(0,[1,4])
    G.addEdges(1,[3])
    G.addEdges(4,[3])
    G.addEdges(3,[])
    G.addEdges(2,[5])
    G.addEdges(5,[])
    @p.expand([
        [[4,5,1,6,3,2]]
    ])
    def test_naive(self,expected):
        G = self.G.graph
        ord = [max(G)**2]*(max(G)+1)
        ord = Solution.naive(G,set(),ord)
        self.assertEqual(ord,expected)
