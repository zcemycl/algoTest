import unittest
from parameterized import parameterized as p
from solns.sortedSearch.sortedSearch import *

class UnitTest_SortedSearch(unittest.TestCase):
    @p.expand([
        [[1,3,5,7],4,2],[[1,3,4,5,7],4,2],
        [[7],4,0],[[1],4,1],
        [[1,2,3],4,3],[[1,4],4,1],[[4],4,0]
    ])
    def test_naive(self,sorted_list,less_than,expected):
        self.assertEqual(Solution.naive(sorted_list,less_than),expected)
