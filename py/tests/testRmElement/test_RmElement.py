
import unittest
from parameterized import parameterized as p
from solns.rmElement.rmElement import *

class UnitTest_RmElement(unittest.TestCase):
    @p.expand([
        [[3,2,2,3],3,2],
        [[0,1,2,2,3,0,4,2],2,5],
        [[1,2,3],4,3]
    ])
    def test_naive(self,nums,val,k):
        ans = Solution.naive(nums,val)
        self.assertEqual(ans,k)

