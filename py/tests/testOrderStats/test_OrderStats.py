
import unittest
from parameterized import parameterized as p
from solns.orderStats.orderStats import *

class UnitTest_OrderStats(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
