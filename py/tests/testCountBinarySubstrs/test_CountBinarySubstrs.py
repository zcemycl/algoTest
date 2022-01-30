
import unittest
from parameterized import parameterized as p
from solns.countBinarySubstrs.countBinarySubstrs import *

class UnitTest_CountBinarySubstrs(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
