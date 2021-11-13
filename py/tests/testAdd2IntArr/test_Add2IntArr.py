
import unittest
from parameterized import parameterized as p
from solns.add2IntArr.add2IntArr import *

class UnitTest_Add2IntArr(unittest.TestCase):
    @p.expand([
        [[1,2,0,0],34,[1,2,3,4]],[[2,7,4],181,[4,5,5]],
        [[9,9,9,9],1,[1,0,0,0,0]],[[0],34,[3,4]]
    ])
    def test_naive(self,num,k,expected):
        self.assertEqual(Solution.naive(num,k),expected)
