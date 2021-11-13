
import unittest
from parameterized import parameterized as p
from solns.maxProdOf2ElementsInArr.maxProdOf2ElementsInArr import *

class UnitTest_MaxProdOf2ElementsInArr(unittest.TestCase):
    @p.expand([
        [[3,4,5,2],12],[[1,5,4,5],16],[[3,7],12],[[5,5,2,4],16]
    ])
    def test_naive(self,nums,expected):
        self.assertEqual(Solution.naive(nums),expected)
