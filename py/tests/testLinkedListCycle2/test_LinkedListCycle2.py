
import unittest
from parameterized import parameterized as p
from solns.linkedListCycle2.linkedListCycle2 import *

class UnitTest_LinkedListCycle2(unittest.TestCase):
    @p.expand([
        ["3204",1,2],["12",0,1],["1",-1,None]
    ])
    def test_naive(self,s,pos,expected):
        l = ListNode.listNode_fromStr(s,pos)
        result = Solution.naive(l)
        if result is not None: 
            result = result.val
        self.assertEqual(result,expected)
