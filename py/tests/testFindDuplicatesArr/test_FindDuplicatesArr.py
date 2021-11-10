
import unittest
from parameterized import parameterized as p
from solns.findDuplicatesArr.findDuplicatesArr import *

class UnitTest_FindDuplicatesArr(unittest.TestCase):
    @p.expand([
        [[4,3,2,7,8,2,3,1],[3,2]],
        [[1,1,2],[1]],[[1],[]]
    ])
    def test_naive(self,nums,target):
        self.assertEqual(Solution.naive(nums),target)
