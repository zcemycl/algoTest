
import unittest
from parameterized import parameterized as p
from solns.symmetricTree.symmetricTree import *

class UnitTest_SymmetricTree(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
