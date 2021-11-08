from solns.lengthOfLongestSubString.lengthOfLongestSubString import *
from solns.wrapper import *
import unittest

class TestLengthOfLongestSubString(unittest.TestCase):
    @timeit
    def test_naive_abcabcbb(self):
        self.assertEqual(Solution.naive(""),0)
