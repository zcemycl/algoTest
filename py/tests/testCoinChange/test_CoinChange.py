
import unittest
from parameterized import parameterized as p
from solns.coinChange.coinChange import *

class UnitTest_CoinChange(unittest.TestCase):
    @p.expand([
        [[1,2,5],11,3],[[2],3,-1],[[1],0,0],[[1],1,1],
        [[1,3,4,5],7,2]
    ])
    def test_naive(self,coins,amount,expected):
        self.assertEqual(Solution.naive(coins,amount),expected)
    @p.expand([
        [[1,2,5],11,3],[[2],3,-1],[[1],0,0],[[1],1,1],
        [[1,3,4,5],7,2]
    ])
    def test_dp(self,coins,amount,expected):
        self.assertEqual(Solution.dp(coins,amount),expected)