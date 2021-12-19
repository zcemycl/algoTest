
import unittest
from parameterized import parameterized as p
from solns.designAddSearchWordsDataStructure.designAddSearchWordsDataStructure import *

class UnitTest_DesignAddSearchWordsDataStructure(unittest.TestCase):
    @p.expand([
        [["WordDictionary","addWord","addWord",
        "addWord","search","search","search","search"],
        [[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]],
        [None,None,None,None,False,True,True,True]]
    ])
    def test_naive(self,operations,targets,expected):
        res = []
        w = WordDictionary()
        for o,t in zip(operations,targets):
            tmp = None
            if o=="wordDictionary":
                pass
            elif o=="addWord":
                w.addWord(t[0])
            elif o=="search":
                tmp = w.search(t[0])
            res.append(tmp)
        self.assertEqual(res,expected)
