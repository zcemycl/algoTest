
import unittest
from parameterized import parameterized as p
from solns.findLuckyIntInArr.findLuckyIntInArr import *

class UnitTest_FindLuckyIntInArr(unittest.TestCase):
    @p.expand([
        [[2,2,3,4],2],[[1,2,2,3,3,3],3],
        [[2,2,2,3,3],-1],[[5],-1],[[4,4,2,3,1,3,2,4,4],4]
    ])
    def test_naive(self,arr,expected):
        self.assertEqual(Solution.naive(arr),expected)
