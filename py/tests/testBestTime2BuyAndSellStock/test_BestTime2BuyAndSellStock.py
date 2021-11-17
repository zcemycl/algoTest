
import unittest
from parameterized import parameterized as p
from solns.bestTime2BuyAndSellStock.bestTime2BuyAndSellStock import *

class UnitTest_BestTime2BuyAndSellStock(unittest.TestCase):
    @p.expand([
        [[7,1,5,3,6,4],5],[[7,6,4,3,1],0],[[2,4,1],2]
    ])
    def test_naive(self,prices,expected):
        self.assertEqual(Solution.naive(prices),expected)
