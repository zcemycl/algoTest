
import unittest
from parameterized import parameterized as p
from solns.search2DMat.search2DMat import *

class UnitTest_Search2DMat(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
