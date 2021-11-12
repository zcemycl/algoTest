
import unittest
from parameterized import parameterized as p
from solns.numDifferentIntsInStr.numDifferentIntsInStr import *

class UnitTest_NumDifferentIntsInStr(unittest.TestCase):
    @p.expand([
        ["a123bc34d8ef34",3],["leetcode1234code234",2],
        ["a1b01c001",1],["abc",0]
    ])
    def test_naive(self,word,expected):
        self.assertEqual(Solution.naive(word),expected)
