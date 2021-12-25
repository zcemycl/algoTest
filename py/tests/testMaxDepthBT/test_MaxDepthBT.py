import unittest
from parameterized import parameterized as p
from solns.maxDepthBT.maxDepthBT import *

class UnitTest_MaxDepthBT(unittest.TestCase):
    @p.expand([
        [[3,9,20,None,None,15,7],3],[[1,None,2],2]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(root),expected)

