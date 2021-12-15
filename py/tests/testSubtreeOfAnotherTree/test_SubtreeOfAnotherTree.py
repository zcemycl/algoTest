import unittest
from parameterized import parameterized as p
from solns.subtreeOfAnotherTree.subtreeOfAnotherTree import *

class UnitTest_SubtreeOfAnotherTree(unittest.TestCase):
    @p.expand([
        [[3,4,5,1,2],[4,1,2],True],
        [[3,4,5,1,2,None,None,None,None,0],[4,1,2],False]
    ])
    def test_naive(self,nums1,nums2,expected):
        root = TreeNode.treeNode_fromList2(nums1)
        subRoot = TreeNode.treeNode_fromList2(nums2)
        self.assertEqual(Solution.naive(root,subRoot),expected)
