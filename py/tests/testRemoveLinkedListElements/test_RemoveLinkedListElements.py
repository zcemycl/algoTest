from solns.ListNode.ListNode import *
import unittest
from parameterized import parameterized as p
from solns.removeLinkedListElements.removeLinkedListElements import *

class UnitTest_RemoveLinkedListElements(unittest.TestCase):
    @p.expand([
        ["1263456",6,"12345"],["",1,""],["7777",7,""]
    ])
    def test_naive(self,s,val,target):
        l = ListNode.listNode_fromStr(s)
        l2 = Solution.naive(l,val)
        ans = ListNode.printListNode(l2)
        self.assertEqual(ans,target)
