import unittest
from parameterized import parameterized as p
from solns.dijkstra.dijkstra import *

class UnitTest_Dijkstra(unittest.TestCase):
    @p.expand([
        ['/dijkstraData.txt',1,
        [7,37,59,82,99,115,133,165,188,197],
        [2599,2610,2947,2052,2367,2399,2029,2442,2505,3068]]
    ])
    def test_naive(self,path,u,vs,expected):
        s = Solution(path)
        d = s.heap(u)
        res = [d[v] for v in vs]
        self.assertEqual(res,expected)