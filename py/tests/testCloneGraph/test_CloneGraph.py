
import unittest
from parameterized import parameterized as p
from solns.cloneGraph.cloneGraph import *

class UnitTest_CloneGraph(unittest.TestCase):
    @p.expand([
        [[[2,4],[1,3],[2,4],[1,3]]],
        [[[]]],[[]]
    ])
    def test_naive(self,al):
        n = Node.fromList(al)
        ncopy = Solution.naive(n)