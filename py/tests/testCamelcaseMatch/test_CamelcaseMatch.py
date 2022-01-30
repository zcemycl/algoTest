
import unittest
from parameterized import parameterized as p
from solns.camelcaseMatch.camelcaseMatch import *

class UnitTest_CamelcaseMatch(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
