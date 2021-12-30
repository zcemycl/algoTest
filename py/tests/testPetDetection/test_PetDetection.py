import unittest
from parameterized import parameterized as p
from solns.petDetection.petDetection import *

class UnitTest_PetDetection(unittest.TestCase):
    @p.expand([
        [[[14,2,1],[2,12,3],[5,2,19]],75]
    ])
    def test_naive(self,confusion_matrix,expected):
        self.assertEqual(Solution.naive(confusion_matrix),expected)
