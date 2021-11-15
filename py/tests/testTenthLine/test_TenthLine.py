import unittest
from parameterized import parameterized as p
from solns.tenthLine.tenthLine import *

class UnitTest_TenthLine(unittest.TestCase):
    @p.expand([
        ["Line 10"]
    ])
    def test_naive(self,expected):
        self.assertEqual(Solution.naive(),expected)
    @p.expand([
        ["Line 10"]
    ])
    def test_cmd(self,expected):
        self.assertEqual(Solution.linuxCMD(),expected)
