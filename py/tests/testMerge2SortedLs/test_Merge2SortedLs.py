import unittest
from parameterized import parameterized as p
from solns.merge2SortedLs.merge2SortedLs import *

class UnitTest_Merge2SortedLs(unittest.TestCase):
    @p.expand([
        ["124","134","112344"],
        ["","",""],
        ["1","","1"]
    ])
    def test_recursive(self,n1,n2,expected):
        l1 = Solution.listNode_fromStr(n1)
        l2 = Solution.listNode_fromStr(n2)
        l3 = Solution.recursive(l1,l2)
        n3 = Solution.printListNode(l3)
        self.assertEqual(n3,expected)