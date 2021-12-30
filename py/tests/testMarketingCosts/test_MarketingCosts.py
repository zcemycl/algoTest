import unittest
from parameterized import parameterized as p
from solns.marketingCosts.marketingCosts import *

class UnitTest_MarketingCosts(unittest.TestCase):
    @p.expand([
        # [[300000,200000,400000,300000,100000],
        # [60000,50000,90000,80000,30000],60000,250000]
    ],skip_on_empty=True)
    def test_naive(self,X,y,x_,expected):
        self.assertEqual(\
            Solution.desired_marketing_expenditure(X,y,x_),
            expected)
