import unittest
from parameterized import parameterized as p
from solns.xyt.xyt import *

class UnitTest_Xyt(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
