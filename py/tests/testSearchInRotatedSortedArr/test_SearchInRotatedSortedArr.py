
import unittest
from parameterized import parameterized as p
from solns.searchInRotatedSortedArr.searchInRotatedSortedArr import *

class UnitTest_SearchInRotatedSortedArr(unittest.TestCase):
    @p.expand([
        [[4,5,6,7,0,1,2],0,4],[[4,5,6,7,0,1,2],3,-1],[[1],0,-1]
    ])
    def test_naive(self,nums,target,expected):
        self.assertEqual(Solution.naive(nums,target),expected)
