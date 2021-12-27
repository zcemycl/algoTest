import unittest
from parameterized import parameterized as p
from solns.mergeKSortedLs.mergeKSortedLs import *

class UnitTest_MergeKSortedLs(unittest.TestCase):
    @p.expand([
        [[[1,4,5],[1,3,4],[2,6]],"11234456"],
        [[],""],[[[]],""]
    ])
    def test_naive(self,nums,expected):
        lists = []
        for tmpnums in nums:
            if tmpnums:
                tmp = ListNode.listNode_fromStr(tmpnums)
            else:
                tmp = None
            lists.append(tmp)
        res = ListNode.printListNode(Solution.naive(lists))
        self.assertEqual(res,expected)