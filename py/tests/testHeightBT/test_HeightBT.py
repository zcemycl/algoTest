
import unittest
from parameterized import parameterized as p
from solns.heightBT.heightBT import *

class UnitTest_HeightBT(unittest.TestCase):
    @p.expand([
        [[3,2,5,1,None,4,6,None,None,None,None,None,7],3]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(root),expected)
