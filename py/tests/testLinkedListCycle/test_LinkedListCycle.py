
import unittest
from parameterized import parameterized as p
from solns.linkedListCycle.linkedListCycle import *

class UnitTest_LinkedListCycle(unittest.TestCase):
    @p.expand([
        ["3204",1,True],["12",0,True],["1",-1,False]
    ])
    def test_naive(self,s,pos,expected):
        l = ListNode.listNode_fromStr(s,pos)
        self.assertEqual(Solution.naive(l),expected)
    @p.expand([
        ["3204",1,True],["12",0,True],["1",-1,False]
    ])
    def test_1space(self,s,pos,expected):
        l = ListNode.listNode_fromStr(s,pos)
        self.assertEqual(Solution.oneSpace(l),expected)