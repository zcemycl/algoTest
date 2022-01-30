
import unittest
from parameterized import parameterized as p
from solns.shortestPathInGridWithObstaclesElimination.shortestPathInGridWithObstaclesElimination import *

class UnitTest_ShortestPathInGridWithObstaclesElimination(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
