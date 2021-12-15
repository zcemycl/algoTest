
import unittest
from parameterized import parameterized as p
from solns.kthSmallestElementInBST.kthSmallestElementInBST import *

class UnitTest_KthSmallestElementInBST(unittest.TestCase):
    @p.expand([
        [[3,1,4,None,2],1,1],[[5,3,6,2,4,None,None,1],3,3],
        [[10,8,11,7,9,None,None,6],6,11]
    ])
    def test_naive(self,nums,k,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(root,k),expected)
