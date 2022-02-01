
import unittest
from parameterized import parameterized as p
from solns.evenOddTree.evenOddTree import *

class UnitTest_EvenOddTree(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
