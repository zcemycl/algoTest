
import unittest
from parameterized import parameterized as p
from solns.petriDish.petriDish import *

class UnitTest_PetriDish(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
