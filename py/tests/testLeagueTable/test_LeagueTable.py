import unittest
from parameterized import parameterized as p
from solns.leagueTable.leagueTable import *

class UnitTest_LeagueTable(unittest.TestCase):
    @p.expand([
        [1,'Chris'],[2,'Arnold'],[3,'Mike']
    ])
    def test_naive(self,rank,expected):
        table = LeagueTable(['Mike', 'Chris', 'Arnold'])
        table.record_result('Mike', 2)
        table.record_result('Mike', 3)
        table.record_result('Arnold', 5)
        table.record_result('Chris', 5)
        self.assertEqual(table.player_rank(rank),expected)
