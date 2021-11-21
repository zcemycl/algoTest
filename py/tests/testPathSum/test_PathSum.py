from solns.treeNode.treeNode import *
import unittest
from parameterized import parameterized as p
from solns.pathSum.pathSum import *

class UnitTest_PathSum(unittest.TestCase):
    @p.expand([
        [[5,4,8,11,None,13,4,7,2,None,None,None,1],22,True],
        [[1,2,3],5,False],[[1,2],0,False]
    ])
    def test_naive(self,nums,targetSum,expected):
        t = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(t,targetSum),expected)
