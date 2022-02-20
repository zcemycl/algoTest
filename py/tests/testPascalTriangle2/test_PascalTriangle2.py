
import unittest
from parameterized import parameterized as p
from solns.pascalTriangle2.pascalTriangle2 import *

class UnitTest_PascalTriangle2(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
