
import unittest
from parameterized import parameterized as p
from solns.wordBreak.wordBreak import *

class UnitTest_WordBreak(unittest.TestCase):
    @p.expand([
        ["leetcode",["leet","code"],True],
        ["applepenapple",["apple","pen"],True],
        ["catsandog",["cats","dog","sand",'and','cat'],False],
        ["leetcode",['leet','code','tcode'],True],
    ])
    def test_naive(self,s,wordDict,expected):
        res = Solution.naive(s,wordDict)
        self.assertEqual(res,expected)
    @p.expand([
        ["leetcode",["leet","code"],True],
        ["applepenapple",["apple","pen"],True],
        ["catsandog",["cats","dog","sand",'and','cat'],False],
        ["leetcode",['leet','code','tcode'],True],
    ])
    def test_dp(self,s,wordDict,expected):
        print(s)
        res = Solution.dp(s,wordDict)
        print(res)
        self.assertEqual(res,expected)