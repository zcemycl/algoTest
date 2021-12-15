
import unittest
from parameterized import parameterized as p
from solns.validateBST.validateBST import *

class UnitTest_ValidateBST(unittest.TestCase):
    @p.expand([
        [[2,1,3],True],[[5,1,4,None,None,3,6],False],
        [[5,4,6,None,None,3,7],False],[[2,2,2],False]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(root),expected)
