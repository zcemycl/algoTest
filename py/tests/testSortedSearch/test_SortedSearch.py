
import unittest
from parameterized import parameterized as p
from solns.sortedSearch.sortedSearch import *

class UnitTest_SortedSearch(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
