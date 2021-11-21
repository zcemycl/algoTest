
import unittest
from parameterized import parameterized as p
from solns.mergeSort.mergeSort import *

class UnitTest_MergeSort(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
