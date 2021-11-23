
import unittest
from parameterized import parameterized as p
from solns.quickSort.quickSort import *

class UnitTest_QuickSort(unittest.TestCase):
    @p.expand([
        [[3,8,2,5,1,4,7,6],[1,2,3,4,5,6,7,8]],
        [[10,5,7,11],[5,7,10,11]],
        [[3,2,10,1,11],[1,2,3,10,11]]
        # [[3,2,3,1,11],[1,2,3,3,11]]
    ])
    def test_naive(self,nums,expected):
        arr_1st,c_1st = Solution.naive(nums,0,len(nums),"first")
        self.assertEqual(arr_1st, expected)
        arr_end,c_end = Solution.naive(nums,0,len(nums),"end")
        self.assertEqual(arr_end, expected)
        arr_med,c_med = Solution.naive(nums,0,len(nums),"med")
        self.assertEqual(arr_med, expected)
    def test_first_count(self):
        arr = Solution.loadtxt2arr()
        arr,count = Solution.naive(arr,0,len(arr),"first")
        self.assertEqual(count,162085)
    def test_end_count(self):
        arr = Solution.loadtxt2arr()
        arr,count = Solution.naive(arr,0,len(arr),"end")
        self.assertEqual(count,164123)
    def test_med_count(self):
        arr = Solution.loadtxt2arr()
        arr,count = Solution.naive(arr,0,len(arr),"med")
        self.assertEqual(count,138382)