
import unittest
from parameterized import parameterized as p
from solns.bTPaths.bTPaths import *

class UnitTest_BTPaths(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
