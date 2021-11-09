import unittest
from parameterized import parameterized as p
from solns.removeDuplicatesFromSortedArr.removeDuplicatesFromSortedArr import *

class Test_RemoveDuplicatesFromSortedArr(unittest.TestCase):
    @p.expand([
        [[1,1,2],2],[[],0],[[1],1],[[1,2],2],
        [[0,0,1,1,1,2,2,3,3,4],5],
        [[0,0,0,2,2,2,4,4,4],3]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)