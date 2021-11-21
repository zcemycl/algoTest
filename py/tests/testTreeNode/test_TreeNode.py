from solns.treeNode.treeNode import *
import unittest
from parameterized import parameterized as p

class UnitTest_TreeNode(unittest.TestCase):
    @p.expand([
        [[1,2,3,4,5]],[[5,4,8,11,None,13,4,7,2,None,None,None,1]]
    ])  
    def test_fromList2(self,nums):
        t = TreeNode.treeNode_fromList2(nums)
        ts = TreeNode.treeNode2List(t)
        print("2. ",ts)
        self.assertEqual(ts,nums)