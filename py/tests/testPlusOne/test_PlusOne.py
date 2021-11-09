import unittest
from parameterized import parameterized as p
from solns.plusOne.plusOne import *

class UnitTest_PlusOne(unittest.TestCase):
    @p.expand([
        [[1,2,3],[1,2,4]],
        [[9],[1,0]],[[4,3,2,1],[4,3,2,2]],
        [[0],[1]]
    ])
    def test_naive(self,digits,expected):
        self.assertEqual(Solution.naive(digits),expected)