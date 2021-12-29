import unittest
from parameterized import parameterized as p
from solns.bstNamedTuple.bstNamedTuple import *

class UnitTest_BstNamedTuple(unittest.TestCase):
    @p.expand([
        [1,True],[3,True],[4,False]
    ])
    def test_naive(self,value,expected):
        n1 = Node(value=1, left=None, right=None)
        n3 = Node(value=3, left=None, right=None)
        n2 = Node(value=2, left=n1, right=n3)
        self.assertEqual(Solution.contains(n2,value),expected)
