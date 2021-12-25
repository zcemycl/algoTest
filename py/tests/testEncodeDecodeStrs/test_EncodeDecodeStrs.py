import unittest
from parameterized import parameterized as p
from solns.encodeDecodeStrs.encodeDecodeStrs import *

class UnitTest_EncodeDecodeStrs(unittest.TestCase):
    @p.expand([
        [["Hello","World"]]
    ])
    def test_naive(self,expected):
        codec = Codec()
        self.assertEqual(codec.decode(codec.encode(expected)),expected)

