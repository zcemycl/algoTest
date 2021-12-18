import unittest
from parameterized import parameterized as p
from solns.rmNthNodeFromEndOfLinkedList.rmNthNodeFromEndOfLinkedList import *

class UnitTest_RmNthNodeFromEndOfLinkedList(unittest.TestCase):
    @p.expand([
        [["1","2","3","4","5"],2,["1","2","3","5"]],
        [["1"],1,[]],[["1","2"],1,["1"]]
    ])
    def test_naive(self,nums1,n,expected):
        head = ListNode.listNode_fromStr(nums1)
        res = ListNode.printListNode(Solution.naive(head,n))
        self.assertEqual(res,"".join(expected))