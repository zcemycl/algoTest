
import unittest
from parameterized import parameterized as p
from solns.containsDuplicate.containsDuplicate import *

class UnitTest_ContainsDuplicate(unittest.TestCase):
    @p.expand([
        [[1,2,3,1],True],
        [[1,2,3,4],False],
        [[1,1,1,3,3,4,3,2,4,2],True],
        [[0],False],[[],False]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
