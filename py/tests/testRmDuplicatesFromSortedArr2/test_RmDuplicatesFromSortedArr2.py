from solns.ListNode.ListNode import *
import unittest
from parameterized import parameterized as p
from solns.rmDuplicatesFromSortedArr2.rmDuplicatesFromSortedArr2 import *

class UnitTest_RmDuplicatesFromSortedArr2(unittest.TestCase):
    @p.expand([
        ["1233445","125"],
        ["11123","23"],["",""],["1","1"]
    ])
    def test_naive(self,s,target):
        l = ListNode.listNode_fromStr(s)
        l2 = Solution.naive(l)
        ans = ListNode.printListNode(l2)
        self.assertEqual(ans,target)