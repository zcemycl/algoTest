from solns.sqrtx.sqrtx import *
import unittest
from parameterized import parameterized as p

class UnitTest_Sqrtx(unittest.TestCase):
    @p.expand([
        [8,2],[4,2],[9,3],[16,4],[5,2]
    ])
    def test_binary(self,n,expected):
        self.assertEqual(Solution.binary(n),expected)