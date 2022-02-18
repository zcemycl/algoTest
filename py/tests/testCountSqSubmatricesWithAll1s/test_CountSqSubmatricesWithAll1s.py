
import unittest
from parameterized import parameterized as p
from solns.countSqSubmatricesWithAll1s.countSqSubmatricesWithAll1s import *

class UnitTest_CountSqSubmatricesWithAll1s(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
