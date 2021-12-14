import unittest
from parameterized import parameterized as p
from solns.rangeSumBST.rangeSumBST import *

class UnitTest_RangeSumBST(unittest.TestCase):
    @p.expand([
        [[10,5,15,3,7,None,18],7,15,32],
        [[10,5,15,3,7,13,18,1,None,6],6,10,23]
    ])
    def test_naive(self,nums,low,high,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(root,low,high),expected)