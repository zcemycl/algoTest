import unittest
from parameterized import parameterized as p
from solns.meetingRooms.meetingRooms import *

class UnitTest_MeetingRooms(unittest.TestCase):
    @p.expand([
        [[],True],[[[0,5]],True],[[[7,10],[2,4]],True],
        [[[0,30],[5,10],[15,20]],False]
    ])
    def test_naive(self,intervals,expected):
        self.assertEqual(Solution.naive(intervals),expected)
