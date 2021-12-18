import unittest
from parameterized import parameterized as p
from solns.serialDeserializeBT.serialDeserializeBT import *

class UnitTest_SerialDeserializeBT(unittest.TestCase):
    @p.expand([
        [[1,2,3,None,None,4,5]],[[]],[[1]],[[1,2]]
    ])
    def test_naive(self,nums):
        t = TreeNode.treeNode_fromList2(nums)
        res = Solution.deserialize(Solution.serialize(t))    
        self.assertEqual(Solution.recursive(t,res),True)
