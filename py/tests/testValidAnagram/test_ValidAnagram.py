import unittest
from parameterized import parameterized as p
from solns.validAnagram.validAnagram import *

class UnitTest_ValidAnagram(unittest.TestCase):
    @p.expand([
        ["anagram","nagaram",True],["rat","car",False]
    ])
    def test_naive(self,s,t,expected):
        self.assertEqual(Solution.naive(s,t),expected)
    @p.expand([
        ["anagram","nagaram",True],["rat","car",False]
    ])
    def test_hash(self,s,t,expected):
        self.assertEqual(Solution.hash(s,t),expected)