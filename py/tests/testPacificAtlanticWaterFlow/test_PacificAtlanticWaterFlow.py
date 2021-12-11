
import unittest
from parameterized import parameterized as p
from solns.pacificAtlanticWaterFlow.pacificAtlanticWaterFlow import *

class UnitTest_PacificAtlanticWaterFlow(unittest.TestCase):
    @p.expand([
        [[[1,2,2,3,5],
          [3,2,3,4,4],
          [2,4,5,3,1],
          [6,7,1,4,5],
          [5,1,1,2,4]],
         [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]],
        [[[2,1],[1,2]],
         [[0,0],[0,1],[1,0],[1,1]]]
    ])
    def test_naive(self,heights,expected):
        self.assertEqual(sorted(Solution.naive(heights)),expected)
