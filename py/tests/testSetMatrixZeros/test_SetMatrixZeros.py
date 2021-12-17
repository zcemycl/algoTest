import unittest
from parameterized import parameterized as p
from solns.setMatrixZeros.setMatrixZeros import *

class UnitTest_SetMatrixZeros(unittest.TestCase):
    @p.expand([
        [[[1,1,1],[1,0,1],[1,1,1]],[[1,0,1],[0,0,0],[1,0,1]]],
        [[[0,1,2,0],[3,4,5,2],[1,3,1,5]],[[0,0,0,0],[0,4,5,0],[0,3,1,0]]]
    ])
    def test_naive(self,matrix,expected):
        Solution.naive(matrix)
        self.assertEqual(matrix,expected)