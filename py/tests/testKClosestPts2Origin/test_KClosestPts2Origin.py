
import unittest
from parameterized import parameterized as p
from solns.kClosestPts2Origin.kClosestPts2Origin import *

class UnitTest_KClosestPts2Origin(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
