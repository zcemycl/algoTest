
import unittest
from parameterized import parameterized as p
from solns.reorderList.reorderList import *

class UnitTest_ReorderList(unittest.TestCase):
    @p.expand([
        [["1","2","3","4"],"1423"],
        [["1","2","3","4","5"],"15243"],
        [["1"],"1"],[["1","2"],"12"],
        [[],""]
    ])
    def test_naive(self,nums,expected):
        head = ListNode.listNode_fromStr(nums)
        Solution.naive(head)
        self.assertEqual(ListNode.printListNode(head),expected)
