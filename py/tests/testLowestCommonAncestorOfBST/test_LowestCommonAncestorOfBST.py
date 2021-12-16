import unittest
from parameterized import parameterized as p
from solns.lowestCommonAncestorOfBST.lowestCommonAncestorOfBST import *

class UnitTest_LowestCommonAncestorOfBST(unittest.TestCase):
    @p.expand([
        [[6,2,8,0,4,7,9,None,None,3,5],[2],[8],6],
        [[6,2,8,0,4,7,9,None,None,3,5],[2],[4],2],
        [[2,1],[2],[1],2]
    ])
    def test_naive(self,nums,pnum,qnum,expected):
        root = TreeNode.treeNode_fromList2(nums)
        p = TreeNode.treeNode_fromList2(pnum)
        q = TreeNode.treeNode_fromList2(qnum)
        outNode = Solution.naive(root,p,q)
        self.assertEqual(outNode.val,expected)
