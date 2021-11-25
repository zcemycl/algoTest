
import unittest
from parameterized import parameterized as p
from solns.stronglyConnectedComponents.stronglyConnectedComponents import *

class UnitTest_StronglyConnectedComponents(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
