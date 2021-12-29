import unittest
from parameterized import parameterized as p
from solns.song.song import *

class UnitTest_Song(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        first = Song("Hello")
        second = Song("Eye of the tiger")
            
        first.next_song(second)
        second.next_song(first)
        self.assertEqual(first.is_repeating_playlist(),True)
