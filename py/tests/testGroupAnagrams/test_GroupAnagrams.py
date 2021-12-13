import unittest
from parameterized import parameterized as p
from solns.groupAnagrams.groupAnagrams import *

class UnitTest_GroupAnagrams(unittest.TestCase):
    @p.expand([
        [["eat","tea","tan","ate","nat","bat"],
            [["eat","tea","ate"],["tan","nat"],["bat"]]],
        [[""],[[""]]],[["a"],[["a"]]]
    ])
    def test_naive(self,strs,expected):
        self.assertEqual(Solution.naive(strs),expected)
