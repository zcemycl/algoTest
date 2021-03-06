
import unittest
from parameterized import parameterized as p
from solns.graph.graph import *

class UnitTest_Graph(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        G = Graph()
        G.addEdges(1,[2,3,10,11])
        G.addEdges(2,[4,5,8])
        self.assertEqual(G.graph[2],[4,5,8])
