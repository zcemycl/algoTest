import unittest
from parameterized import parameterized as p
from solns.electionPoll.electionPoll import *

class UnitTest_ElectionPoll(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
