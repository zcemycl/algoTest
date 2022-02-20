
import unittest
from parameterized import parameterized as p
from solns.pascalTriangle.pascalTriangle import *

class UnitTest_PascalTriangle(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
