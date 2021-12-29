
import unittest
from parameterized import parameterized as p
from solns.pipeline.pipeline import *

class UnitTest_Pipeline(unittest.TestCase):
    @p.expand([
        [3,5]
    ])
    def test_naive(self,n,expected):
        fun = pipeline(lambda x: x * 3, lambda x: x + 1, lambda x: x / 2)
        self.assertEqual(fun(n),expected)
