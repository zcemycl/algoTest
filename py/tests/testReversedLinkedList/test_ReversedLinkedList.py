import unittest
from parameterized import parameterized as p
from solns.reversedLinkedList.reversedLinkedList import *

class UnitTest_ReversedLinkedList(unittest.TestCase):
    @p.expand([
        [["1","2","3","4","5"],["5","4","3","2","1"]],
        [["1","2"],["2","1"]],[[],[]]
    ])
    def test_naive(self,nums,expected):
        l = ListNode.listNode_fromStr(nums)
        result = ListNode.printListNode(Solution.naive(l))
        self.assertEqual(result,''.join(expected))