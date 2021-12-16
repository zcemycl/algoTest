import unittest
from parameterized import parameterized as p
from solns.binaryTreePreorderTraversal.binaryTreePreorderTraversal import *

class UnitTest_BinaryTreePreorderTraversal(unittest.TestCase):
    @p.expand([
        [[1,None,2,3],[1,2,3]],[[],[]],[[1],[1]]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(root),expected)


