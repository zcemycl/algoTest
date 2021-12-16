import unittest
from parameterized import parameterized as p
from solns.binaryTreePruning.binaryTreePruning import *

class UnitTest_BinaryTreePruning(unittest.TestCase):
    @p.expand([
        [[1,None,0,0,1],[1,None,0,None,1]],
        [[1,0,1,0,0,0,1],[1,None,1,None,1]],
        [[1,1,0,1,1,0,1,0],[1,1,0,1,1,None,1]],
        [[0,0,0],[]]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        outNode = Solution.naive(root)
        out = TreeNode.treeNode2List(outNode)
        self.assertEqual(out,expected)
