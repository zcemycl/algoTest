import unittest
from parameterized import parameterized as p
from solns.middleOfLinkedLs.middleOfLinkedLs import *

class UnitTest_MiddleOfLinkedLs(unittest.TestCase):
    @p.expand([
        ["12345","345"],["123456","456"],["1","1"]
    ])
    def test_naive(self,nums,expected):
        head = ListNode.listNode_fromStr(nums)
        self.assertEqual(ListNode.printListNode(Solution.naive(head)),
            expected)
