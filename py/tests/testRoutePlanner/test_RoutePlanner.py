
import unittest
from parameterized import parameterized as p
from solns.routePlanner.routePlanner import *

class UnitTest_RoutePlanner(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
