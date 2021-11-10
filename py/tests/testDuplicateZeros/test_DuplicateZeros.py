
import unittest
from parameterized import parameterized as p
from solns.duplicateZeros.duplicateZeros import *

class UnitTest_DuplicateZeros(unittest.TestCase):
    @p.expand([
        [[1,2,3],[1,2,3]],[[1,0,2,3,0,4,5,0],[1,0,0,2,3,0,0,4]]
    ])
    def test_naive(self,arr,expected):
        Solution.naive(arr)
        self.assertEqual(arr,expected)
