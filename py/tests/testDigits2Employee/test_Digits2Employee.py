
import unittest
from parameterized import parameterized as p
from solns.digits2Employee.digits2Employee import *

class UnitTest_Digits2Employee(unittest.TestCase):
    @p.expand([
        [9,9],[189,99],[15,12],[2040,716]
    ])
    def test_naive(self,x,expected):
        self.assertEqual(Solution.naive(x),expected)        
