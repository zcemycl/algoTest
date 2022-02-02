
import unittest
from parameterized import parameterized as p
from solns.waterBottles.waterBottles import *

class UnitTest_WaterBottles(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
