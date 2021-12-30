
import unittest
from parameterized import parameterized as p
from solns.abTest.abTest import *

class UnitTest_AbTest(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
