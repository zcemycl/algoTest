
import unittest
from parameterized import parameterized as p
from solns.petDetection.petDetection import *

class UnitTest_PetDetection(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
