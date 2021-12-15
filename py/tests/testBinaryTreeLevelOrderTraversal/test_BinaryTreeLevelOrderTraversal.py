import unittest
from parameterized import parameterized as p
from solns.binaryTreeLevelOrderTraversal.binaryTreeLevelOrderTraversal import *

class UnitTest_BinaryTreeLevelOrderTraversal(unittest.TestCase):
    @p.expand([
        [[3,9,20,None,None,15,7],[[3],[9,20],[15,7]]],
        [[1],[[1]]],[[],[]]
    ])
    def test_naive(self,nums,expected):
        tree = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(tree),expected)