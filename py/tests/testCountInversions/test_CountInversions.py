import unittest
from parameterized import parameterized as p
from solns.countInversions.countInversions import *

class UnitTest_CountInversions(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        arr = Solution.loadtxt2arr()
        print(len(arr),arr[0],arr[-1])
