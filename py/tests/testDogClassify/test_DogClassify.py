
import unittest
from parameterized import parameterized as p
from solns.dogClassify.dogClassify import *

class UnitTest_DogClassify(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
