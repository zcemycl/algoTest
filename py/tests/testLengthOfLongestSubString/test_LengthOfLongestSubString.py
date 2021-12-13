from solns.lengthOfLongestSubString.lengthOfLongestSubString import *
from solns.wrapper import *
import unittest
# import pytest
from parameterized import parameterized as p

class TestLengthOfLongestSubString(unittest.TestCase):
    @p.expand([
        ["", 0],["abcabcbb", 3],
        ["dvdf",3],["bbbbbb",1],
        [" ",1],["pwwkew",3]])
    def test_naive_empty(self,string, expected):
        self.assertEqual(Solution.naive(string),expected)

    @p.expand([
        ["", 0],["abcabcbb", 3],
        ["dvdf",3],["bbbbbb",1],
        [" ",1],["pwwkew",3]])
    def test_slidingWindows(self,string, expected):
        self.assertEqual(Solution.slidingWindows(string),expected)

