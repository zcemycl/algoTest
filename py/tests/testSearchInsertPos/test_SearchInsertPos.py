import unittest
from parameterized import parameterized as p
from solns.searchInsertPos.searchInsertPos import *

class UnitTest_SearchInsertPos(unittest.TestCase):
    @p.expand([
        [[1,3,5,6],0,0],[[1,3,5,6],1,0],
        [[1,3,5,6],2,1],[[1,3,5,6],7,4],
        [[1,3,5,6],4,2],[[0],4,1],[[0],0,0],[[1],0,0]
    ])
    def test_naive(self,nums,target,expected):
        self.assertEqual(Solution.naive(nums,target),expected)
