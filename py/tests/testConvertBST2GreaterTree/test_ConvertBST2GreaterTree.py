
import unittest
from parameterized import parameterized as p
from solns.convertBST2GreaterTree.convertBST2GreaterTree import *

class UnitTest_ConvertBST2GreaterTree(unittest.TestCase):
    @p.expand([
        [[4,1,6,0,2,5,7,None,None,None,3,None,None,None,8],
        [30,36,21,36,35,26,15,None,None,None,33,None,None,None,8]],
        [[0,None,1],[1,None,1]]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        root = Solution.naive(root)
        out = TreeNode.treeNode2List(root)
        self.assertEqual(out,expected)
