import unittest
from solns.med2SortedArrays.med2SortedArrays import *
from parameterized import parameterized as p

class TestMed2SortedArrays(unittest.TestCase):
    @p.expand([
        [[0,0],[0],0]
    ])
    def test_naive(self,nums1,nums2,med):
        self.assertEqual(Solution.naive(nums1,nums2),med)