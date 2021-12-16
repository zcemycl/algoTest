
import unittest
from parameterized import parameterized as p
from solns.searchInBST.searchInBST import *

class UnitTest_SearchInBST(unittest.TestCase):
    @p.expand([
        [[4,2,7,1,3],2,[2,1,3]],[[4,2,7,1,3],5,[]]
    ])
    def test_naive(self,nums,val,expected):
        root = TreeNode.treeNode_fromList2(nums)
        outNode = Solution.naive(root,val)
        out = TreeNode.treeNode2List(outNode)
        self.assertEqual(out,expected)
