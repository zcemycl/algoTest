import unittest
from parameterized import parameterized as p
from solns.spiralMatrix.spiralMatrix import *

class UnitTest_SpiralMatrix(unittest.TestCase):
    @p.expand([
        [[[1,2,3],[4,5,6],[7,8,9]],[1,2,3,6,9,8,7,4,5]],
        [[[1,2,3,4],[5,6,7,8],[9,10,11,12]],[1,2,3,4,8,12,11,10,9,5,6,7]],
        [[[1]],[1]],[[[1,2,3]],[1,2,3]],[[[1],[4],[7]],[1,4,7]]
    ])
    def test_naive(self,matrix,expected):
        self.assertEqual(Solution.naive(matrix),expected)