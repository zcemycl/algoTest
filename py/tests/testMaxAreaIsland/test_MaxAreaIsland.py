
import unittest
from parameterized import parameterized as p
from solns.maxAreaIsland.maxAreaIsland import *

class UnitTest_MaxAreaIsland(unittest.TestCase):
    @p.expand([
        [[[0,0,1,0,0,0,0,1,0,0,0,0,0],
          [0,0,0,0,0,0,0,1,1,1,0,0,0],
          [0,1,1,0,1,0,0,0,0,0,0,0,0],
          [0,1,0,0,1,1,0,0,1,0,1,0,0],
          [0,1,0,0,1,1,0,0,1,1,1,0,0],
          [0,0,0,0,0,0,0,0,0,0,1,0,0],
          [0,0,0,0,0,0,0,1,1,1,0,0,0],
          [0,0,0,0,0,0,0,1,1,0,0,0,0]],6],
        [[[0,0,0,0,0,0,0,0,0,0,0]],0],
        [[[1,1,1,1,0],
          [1,1,0,1,0],
          [1,1,0,0,0],
          [0,0,0,0,0],],9],
        [[[1,1,0,0,0],
          [1,1,0,0,0],
          [0,0,1,0,0],
          [0,0,0,1,1]],4]
    ])
    def test_naive(self,grid,expected):
        self.assertEqual(Solution.naive(grid),expected)
