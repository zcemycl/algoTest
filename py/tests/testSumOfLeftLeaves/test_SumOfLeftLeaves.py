from solns.treeNode.treeNode import *
import unittest
from parameterized import parameterized as p
from solns.sumOfLeftLeaves.sumOfLeftLeaves import *

class UnitTest_SumOfLeftLeaves(unittest.TestCase):
    @p.expand([
        [[3,9,20,None,None,15,7],24],[[1],0]
    ])
    def test_naive(self,nums,expected):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.naive(root),expected)
