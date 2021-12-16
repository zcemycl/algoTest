import unittest
from parameterized import parameterized as p
from solns.naryTreePostorderTraversal.naryTreePostorderTraversal import *

class UnitTest_NaryTreePostorderTraversal(unittest.TestCase):
    @p.expand([
        [[5,6,3,2,4,1]]
    ])
    def test_naive(self,expected):
        n5 = Node(5)
        n6 = Node(6)
        n3 = Node(3,[n5,n6])
        n2 = Node(2)
        n4 = Node(4)
        n1 = Node(1,[n3,n2,n4])
        self.assertEqual(Solution.naive(n1),expected)
