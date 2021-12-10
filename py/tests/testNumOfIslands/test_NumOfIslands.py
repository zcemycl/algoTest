import unittest
from parameterized import parameterized as p
from solns.numOfIslands.numOfIslands import *

class UnitTest_NumOfIslands(unittest.TestCase):
    @p.expand([
        [[
            ["1","1","1","1","0"],
            ["1","1","0","1","0"],
            ["1","1","0","0","0"],
            ["0","0","0","0","0"],
        ],1],
        [[
            ["1","1","0","0","0"],
            ["1","1","0","0","0"],
            ["0","0","1","0","0"],
            ["0","0","0","1","1"],
        ],3]
    ])
    def test_naive(self,grid,expected):
        self.assertEqual(Solution.naive(grid),expected)