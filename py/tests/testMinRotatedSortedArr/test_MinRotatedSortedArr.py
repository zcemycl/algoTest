
import unittest
from parameterized import parameterized as p
from solns.minRotatedSortedArr.minRotatedSortedArr import *

class UnitTest_MinRotatedSortedArr(unittest.TestCase):
    @p.expand([
        [[3,4,5,1,2],1],[[4,5,6,7,0,1,2],0],[[11,13,15,17],11]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)