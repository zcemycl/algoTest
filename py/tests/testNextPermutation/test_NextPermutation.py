
import unittest
from parameterized import parameterized as p
from solns.nextPermutation.nextPermutation import *

class UnitTest_NextPermutation(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
