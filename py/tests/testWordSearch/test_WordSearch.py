import unittest
from parameterized import parameterized as p
from solns.wordSearch.wordSearch import *

class UnitTest_WordSearch(unittest.TestCase):
    @p.expand([
        [[["A","B","C","E"],
          ["S","F","C","S"],
          ["A","D","E","E"]],
            "ABCCED",True],
        [[["A","B","C","E"],
          ["S","F","C","S"],
          ["A","D","E","E"]],
            "SEE",True],
        [[["A","B","C","E"],
          ["S","F","C","S"],
          ["A","D","E","E"]],
            "ABCB",False],
        [[["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"]],
            "AAAAAAAAAAAABAA",False]
    ])
    def test_naive(self,board,word,expected):
        self.assertEqual(Solution.naive(board,word),expected)
    @p.expand([
        [[["A","B","C","E"],
          ["S","F","C","S"],
          ["A","D","E","E"]],
            "ABCCED",True],
        [[["A","B","C","E"],
          ["S","F","C","S"],
          ["A","D","E","E"]],
            "SEE",True],
        [[["A","B","C","E"],
          ["S","F","C","S"],
          ["A","D","E","E"]],
            "ABCB",False],
        [[["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"],
          ["A","A","A","A","A","A"]],
            "AAAAAAAAAAAABAA",False]
    ])
    def test_quick(self,board,word,expected):
        self.assertEqual(Solution.quick(board,word),expected)