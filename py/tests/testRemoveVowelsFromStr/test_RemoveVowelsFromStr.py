
import unittest
from parameterized import parameterized as p
from solns.removeVowelsFromStr.removeVowelsFromStr import *

class UnitTest_RemoveVowelsFromStr(unittest.TestCase):
    @p.expand([
        ["leetcodeisacommunityforcoders","ltcdscmmntyfrcdrs"],
        ["aeiou",""],["",""]
    ])
    def test_naive(self,s,expected):
        self.assertEqual(Solution.regex(s),expected)
