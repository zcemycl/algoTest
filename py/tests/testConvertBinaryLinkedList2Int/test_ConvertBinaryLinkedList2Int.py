from solns.ListNode.ListNode import *
import unittest
from parameterized import parameterized as p
from solns.convertBinaryLinkedList2Int.convertBinaryLinkedList2Int import *

class UnitTest_ConvertBinaryLinkedList2Int(unittest.TestCase):
    @p.expand([
        ["101",5],["0",0],["10",2],["100100111000000",18880]
    ])
    def test_naive(self,s,expected):
        l = ListNode.listNode_fromStr(s)
        self.assertEqual(Solution.naive(l),expected)
