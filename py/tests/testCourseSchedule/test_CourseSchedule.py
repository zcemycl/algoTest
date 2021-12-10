
import unittest
from parameterized import parameterized as p
from solns.courseSchedule.courseSchedule import *

class UnitTest_CourseSchedule(unittest.TestCase):
    @p.expand([
        [2,[[1,0]],True],[2,[[1,0],[0,1]],False],
        [5,[[0,1],[0,2],[1,3],[1,4],[3,4]],True]
    ])
    def test_naive(self,n,prerequisites,expected):
        self.assertEqual(Solution.naive(n,prerequisites),expected)
