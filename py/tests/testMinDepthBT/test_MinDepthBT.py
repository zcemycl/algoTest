
import unittest
from parameterized import parameterized as p
from solns.minDepthBT.minDepthBT import *

class UnitTest_MinDepthBT(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
