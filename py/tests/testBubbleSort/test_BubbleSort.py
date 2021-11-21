
import unittest
from parameterized import parameterized as p
from solns.bubbleSort.bubbleSort import *

class UnitTest_BubbleSort(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
