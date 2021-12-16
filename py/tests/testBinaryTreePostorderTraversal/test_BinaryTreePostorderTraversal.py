import unittest
from parameterized import parameterized as p
from solns.binaryTreePostorderTraversal.binaryTreePostorderTraversal import *

class UnitTest_BinaryTreePostorderTraversal(unittest.TestCase):
    @p.expand([
        [[1,None,2,3],[3,2,1]],[[],[]],[[1],[1]]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(root),expected)
