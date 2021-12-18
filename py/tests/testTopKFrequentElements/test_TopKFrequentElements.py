import unittest
from parameterized import parameterized as p
from solns.topKFrequentElements.topKFrequentElements import *

class UnitTest_TopKFrequentElements(unittest.TestCase):
    @p.expand([
        [[1,1,1,2,2,3],2,[1,2]],[[1],1,[1]],[[-1,-1],1,[-1]]
    ])
    def test_naive(self,nums,k,expected):
        self.assertEqual(Solution.naive(nums,k),expected)