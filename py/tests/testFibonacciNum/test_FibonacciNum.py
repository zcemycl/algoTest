
import unittest
from parameterized import parameterized as p
from solns.fibonacciNum.fibonacciNum import *

class UnitTest_FibonacciNum(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
