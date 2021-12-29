import unittest
from parameterized import parameterized as p
from solns.trainComposition.trainComposition import *

class UnitTest_TrainComposition(unittest.TestCase):
    @p.expand([
        [[7,13]]
    ])
    def test_naive(self,expected):
        res = []
        train = TrainComposition()
        train.attach_wagon_from_left(7)
        train.attach_wagon_from_left(13)
        res.append(train.detach_wagon_from_right()) # should print 7
        res.append(train.detach_wagon_from_left()) # should print 13
        self.assertEqual(res,expected)
