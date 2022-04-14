
import unittest
from parameterized import parameterized as p
from solns.binaryTreeMaxPathSum.binaryTreeMaxPathSum import *

class UnitTest_BinaryTreeMaxPathSum(unittest.TestCase):
    @p.expand([
        [[1,2,3],6],
        [[-10,9,20,None,None,15,7],42],
        [[30,-5,-10,10,None,9,20,None,None,None,None,15,7],60],
        [[-3],-3],
        [[2,-1,-2],2],
        [[9,6,-3,None,None,-6,2,None,None,2,None,-6,-6,-6],16]
    ])
    def test_naive(self,nums,expected):
        tree = TreeNode.treeNode_fromList2(nums)
        s = Solution()
        self.assertEqual(s.naive(tree),expected)
