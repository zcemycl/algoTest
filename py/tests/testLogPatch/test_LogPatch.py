import unittest
from parameterized import parameterized as p
from solns.logPatch.logPatch import *

class UnitTest_LogPatch(unittest.TestCase):
    @p.expand([
        [10,0.5]
    ])
    def test_naive(self,x,expected):
        Solution.add_patch()
        self.assertEqual(math.log100(x),expected)
