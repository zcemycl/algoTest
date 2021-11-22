
import unittest
from parameterized import parameterized as p
from solns.bubbleSort.bubbleSort import *

class UnitTest_BubbleSort(unittest.TestCase):
    @p.expand([
        [[4,5,1,8,10,11,0,7,9],[0,1,4,5,7,8,9,10,11]]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums), expected)
