import unittest
from parameterized import parameterized as p
from solns.meetingRooms2.meetingRooms2 import *

class UnitTest_MeetingRooms2(unittest.TestCase):
    @p.expand([
        [[[0,30],[5,10],[15,20]],2],[[[[7,10],[2,4]]],1],
        [[],0],[[[2,5]],1],[[[13,15],[1,13]],1]
    ])
    def test_naive(self,intervals,expected):
        self.assertEqual(Solution.naive(intervals),expected)
