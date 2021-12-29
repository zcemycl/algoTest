import unittest
from parameterized import parameterized as p
from solns.mergeNames.mergeNames import *

class UnitTest_MergeNames(unittest.TestCase):
    @p.expand([
        [["Ava","Emma","Olivia"],["Olivia","Sophia","Emma"],
            ["Ava","Emma","Olivia","Sophia"]]
    ])
    def test_naive(self,names1,names2,expected):
        self.assertEqual(len(Solution.unique_names(names1,names2)),
            len(expected))
