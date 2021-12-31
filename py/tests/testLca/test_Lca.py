
import unittest
from parameterized import parameterized as p
from solns.lca.lca import *

class UnitTest_Lca(unittest.TestCase):
    @p.expand([
        [[4,2,7,1,3,6],1,7]
    ])
    def test_naive(self,nums,v1,v2):
        root = TreeNode.treeNode_fromList2(nums)
        self.assertEqual(Solution.lca(root,v1,v2),root)
