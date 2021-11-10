import unittest
from parameterized import parameterized as p
from solns.confusingNum.confusingNum import *

class UnitTest_ConfusingNum(unittest.TestCase):
    @p.expand([
        [6,True],[0,False],[89,True],[11,False],[1,False],
        [25,False],[1196,True]
    ])
    def test_naive(self,n,expected):
        self.assertEqual(Solution.naive(n),expected)
