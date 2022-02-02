
import unittest
from parameterized import parameterized as p
from solns.concatArray.concatArray import *

class UnitTest_ConcatArray(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
