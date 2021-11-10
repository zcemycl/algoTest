from solns.ListNode.ListNode import *
import unittest
from parameterized import parameterized as p
from solns.rmDuplicatesFromUnsortedLinkedList.rmDuplicatesFromUnsortedLinkedList import *

class UnitTest_RmDuplicatesFromUnsortedLinkedList(unittest.TestCase):
    @p.expand([
        ["1232","13"],["2112",""]
    ])
    def test_naive(self,s,target):
        l = ListNode.listNode_fromStr(s)
        l2 = Solution.naive(l)
        ans = ListNode.printListNode(l2)
        self.assertEqual(ans,target)
