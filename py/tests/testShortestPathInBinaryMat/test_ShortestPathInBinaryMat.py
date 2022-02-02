
import unittest
from parameterized import parameterized as p
from solns.shortestPathInBinaryMat.shortestPathInBinaryMat import *

class UnitTest_ShortestPathInBinaryMat(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
