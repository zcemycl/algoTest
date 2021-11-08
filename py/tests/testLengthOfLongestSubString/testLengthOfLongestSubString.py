from solns.lengthOfLongestSubString.lengthOfLongestSubString import *
from solns.wrapper import *
import unittest

class TestLengthOfLongestSubString(unittest.TestCase):
    @timeit
    def test_naive_empty(self):
        self.assertEqual(Solution.naive(""),0)
    @timeit
    def test_naive_abcabcbb(self):
        self.assertEqual(Solution.naive("abcabcbb"),3)
    @timeit
    def test_naive_dvdf(self):
        self.assertEqual(Solution.naive("dvdf"),3)
    @timeit
    def test_naive_bbbbbb(self):
        self.assertEqual(Solution.naive("bbbbbb"),1)
    @timeit
    def test_naive_space(self):
        self.assertEqual(Solution.naive(" "),1)
    @timeit
    def test_naive_pwwkew(self):
        self.assertEqual(Solution.naive("pwwkew"),3)



