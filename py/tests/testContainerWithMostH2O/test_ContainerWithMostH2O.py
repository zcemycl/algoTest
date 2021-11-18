
import unittest
from parameterized import parameterized as p
from solns.containerWithMostH2O.containerWithMostH2O import *

class UnitTest_ContainerWithMostH2O(unittest.TestCase):
    @p.expand([
        [[1,8,6,2,5,4,8,3,7],49],[[1,1],1],[[1,2,1],2],
        [[1,4,1,1,1,3],12],[[2,3,4,5,18,17,6],17]
    ])
    def test_naive(self,height,expected):
        self.assertEqual(Solution.naive(height), expected)
