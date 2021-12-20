import unittest
from parameterized import parameterized as p
from solns.medianMaintenance.medianMaintenance import *

class UnitTest_MedianMaintenance(unittest.TestCase):
    @p.expand([
        ['/Median.txt',1213]
    ])
    def test_heap(self,path,expected):
        s = Solution(path)
        res = s.heap()
        self.assertEqual(res,expected)
