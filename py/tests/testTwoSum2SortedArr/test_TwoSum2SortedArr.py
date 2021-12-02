
import unittest
from parameterized import parameterized as p
from solns.twoSum2SortedArr.twoSum2SortedArr import *

class UnitTest_TwoSum2SortedArr(unittest.TestCase):
    @p.expand([
        [[2,7,11,15],9,[1,2]],[[2,3,4],6,[1,3]],
        [[-1,0],-1,[1,2]]
    ])
    def test_naive(self,numbers,target,expected):
        self.assertEqual(Solution.naive(numbers,
            target),expected)
