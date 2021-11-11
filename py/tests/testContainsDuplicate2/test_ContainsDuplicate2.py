import unittest
from parameterized import parameterized as p
from solns.containsDuplicate2.containsDuplicate2 import *

class UnitTest_ContainsDuplicate2(unittest.TestCase):
    @p.expand([
        [[1,2,3,1],3,True],[[1,0,1,1],1,True],[[1,2,3,1,2,3],2,False]
    ])
    def test_naive(self,nums,k,expected):
        self.assertEqual(Solution.naive(nums,k),expected)        
