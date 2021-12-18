import unittest
from parameterized import parameterized as p
from solns.implementTrie_PrefixTree.implementTrie_PrefixTree import *

class UnitTest_ImplementTrie_PrefixTree(unittest.TestCase):
    @p.expand([
        [["Trie","insert","search","search",
            "startsWith","insert","search"],
         [[],["apple"],["apple"],["app"],["app"],
            ["app"],["app"]],
         [None, None, True, False, True, None, True]]
    ])
    def test_naive(self,operations,targets,expected):
        res = []
        for o,t in zip(operations,targets):
            if o=="Trie":
                trie = Trie()
                tmpres = None
            elif o=="insert":
                tmpres = trie.insert(t[0])
            elif o=="search":
                tmpres = trie.search(t[0])
            elif o=="startsWith":
                tmpres = trie.startsWith(t[0])
            res.append(tmpres)
        self.assertEqual(res,expected)
        
