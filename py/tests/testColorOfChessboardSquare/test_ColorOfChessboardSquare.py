
import unittest
from parameterized import parameterized as p
from solns.colorOfChessboardSquare.colorOfChessboardSquare import *

class UnitTest_ColorOfChessboardSquare(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
