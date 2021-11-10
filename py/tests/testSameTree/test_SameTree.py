from solns.sameTree.sameTree import *
import unittest
from parameterized import parameterized as p

class UnitTest_SameTree(unittest.TestCase):
    @p.expand([
        [[1,2,4],[1,2,4],True]
    ])
    def test_recursive(self,l1,l2,expected):
        t1 = TreeNode.treeNode_fromList2(l1)
        t2 = TreeNode.treeNode_fromList2(l2)
        ans = Solution.recursive(t1,t2)
        self.assertEqual(ans,expected)
