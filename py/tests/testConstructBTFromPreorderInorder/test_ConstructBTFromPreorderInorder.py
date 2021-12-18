import unittest
from parameterized import parameterized as p
from solns.constructBTFromPreorderInorder.constructBTFromPreorderInorder import *

class UnitTest_ConstructBTFromPreorderInorder(unittest.TestCase):
    @p.expand([
        [[3,9,20,15,7],[9,3,15,20,7],[3,9,20,None,None,15,7]]
    ])
    def test_naive(self,preorder,inorder,nums):
        s = Solution()
        t = s.buildTree(preorder,inorder)   
        expected = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.recursive(t,expected),True)
