import unittest
from parameterized import parameterized as p
from solns.electionPoll.electionPoll import *

class UnitTest_ElectionPoll(unittest.TestCase):
    @p.expand([
        [[28.7,29,3.8,9,37,"2019-12-19",
        "Civic Party","Alliance Party",34]]
    ])
    def test_naive(self,expected):
        df = Solution.readdf()
        self.assertEqual(Solution.naive(df),expected)
