
import unittest
from parameterized import parameterized as p
from solns.combinationSum.combinationSum import *

class UnitTest_CombinationSum(unittest.TestCase):
    @p.expand([
        [[2,3,6,7],7,[[2,2,3],[7]]],
        [[2,3,5],8,[[2,2,2,2],[2,3,3],[3,5]]],
        [[2],1,[]],
        [[1],1,[[1]]],
        [[1],2,[[1,1]]]
    ])
    def test_naive(self,candidates,target,expected):
        store = Solution.combinationSum(candidates,target)
        self.assertEqual(store,expected)