
import unittest
from parameterized import parameterized as p
from solns.rmCoveredIntervals.rmCoveredIntervals import *

class UnitTest_RmCoveredIntervals(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
