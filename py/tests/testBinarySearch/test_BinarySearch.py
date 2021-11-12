
import unittest
from parameterized import parameterized as p
from solns.binarySearch.binarySearch import *

class UnitTest_BinarySearch(unittest.TestCase):
    @p.expand([
        [[-1,0,3,5,9,12],9,4],[[-1,0,3,5,9,12],2,-1]
    ])
    def test_naive(self,nums,target,expected):
        self.assertEqual(Solution.naive(nums,target),expected)
