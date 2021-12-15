import unittest
from parameterized import parameterized as p
from solns.invertBinaryTree.invertBinaryTree import *

class UnitTest_InvertBinaryTree(unittest.TestCase):
    @p.expand([
        [[4,2,7,1,3,6,9],[4,7,2,9,6,3,1]],
        [[2,1,3],[2,3,1]],[[],[]]
    ])
    def test_naive(self,nums,expected):
        inp = TreeNode.treeNode_fromList2(nums)
        out = Solution.naive(inp)
        outList = TreeNode.treeNode2List(out)
        self.assertEqual(outList,expected)