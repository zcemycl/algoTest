
import unittest
from parameterized import parameterized as p
from solns.sortList.sortList import *

class UnitTest_SortList(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
