import unittest
from parameterized import parameterized as p
from solns.isBST.isBST import *

class UnitTest_IsBST(unittest.TestCase):
    @p.expand([
        [[4,2,6,1,3,5,7],True]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.checkBST(root), expected)
