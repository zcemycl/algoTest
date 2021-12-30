
import unittest
from parameterized import parameterized as p
from solns.stockPrices.stockPrices import *

class UnitTest_StockPrices(unittest.TestCase):
    @p.expand([
        [['MSFT','FB']]
    ])
    def test_naive(self,expected):
        #For example, the code below should print: ('FB', 'MSFT')
        data = pd.DataFrame.from_dict({
            'GOOG' : [
                742.66, 738.40, 738.22, 741.16,
                739.98, 747.28, 746.22, 741.80,
                745.33, 741.29, 742.83, 750.50
            ],
            'FB' : [
                108.40, 107.92, 109.64, 112.22,
                109.57, 113.82, 114.03, 112.24,
                114.68, 112.92, 113.28, 115.40
            ],
            'MSFT' : [
                55.40, 54.63, 54.98, 55.88,
                54.12, 59.16, 58.14, 55.97,
                61.20, 57.14, 56.62, 59.25
            ],
            'AAPL' : [
                106.00, 104.66, 104.87, 105.69,
                104.22, 110.16, 109.84, 108.86,
                110.14, 107.66, 108.08, 109.90
            ]
        })
        self.assertEqual(Solution.most_corr(data),expected)