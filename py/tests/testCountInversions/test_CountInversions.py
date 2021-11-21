
import unittest
from parameterized import parameterized as p
from solns.countInversions.countInversions import *

class UnitTest_CountInversions(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
