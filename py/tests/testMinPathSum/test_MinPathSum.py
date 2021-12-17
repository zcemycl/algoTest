import unittest
from parameterized import parameterized as p
from solns.minPathSum.minPathSum import *

class UnitTest_MinPathSum(unittest.TestCase):
    @p.expand([
        [[[1,3,1],[1,5,1],[4,2,1]],7],
        [[[1,2,3],[4,5,6]],12]
    ])
    def test_naive(self,grid,expected):
        s = Solution()
        self.assertEqual(s.naive(grid),expected)
    @p.expand([
        [[[1,3,1],[1,5,1],[4,2,1]],7],
        [[[1,2,3],[4,5,6]],12]
    ])
    def test_dp(self,grid,expected):
        self.assertEqual(Solution.dp(grid),expected)
