
import unittest
from parameterized import parameterized as p
from solns.routePlanner.routePlanner import *

class UnitTest_RoutePlanner(unittest.TestCase):
    @p.expand([
        [[[True, False, False],
        [True, True, False],
        [False, True, True]],0,0,2,2,True]
    ])
    def test_naive(self,mm,sy,sx,ey,ex,expected):
        self.assertEqual(Solution.naive(sy,sx,ey,ex,mm),expected)
