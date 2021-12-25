import unittest
from parameterized import parameterized as p
from solns.alienDict.alienDict import *

class UnitTest_AlienDict(unittest.TestCase):
    @p.expand([
        [ ["wrt","wrf","er","ett","rftt"],["wertf"]],
        [["z","x"],["zx"]],[["z","x","z"],[""]],
        [["aba"],["ba","ab"]],[["b","b"],["b"]],
        [["b","c","a","ab","aa"],["bca"]],
        [["ab","adc"],["abdc"]]
    ])
    def test_naive(self,words,expected):
        self.assertEqual(Solution.naive(words) in expected,True)
