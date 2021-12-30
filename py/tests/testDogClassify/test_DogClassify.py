import unittest
from parameterized import parameterized as p
from solns.dogClassify.dogClassify import *

class UnitTest_DogClassify(unittest.TestCase):
    @p.expand([
        [51]
    ])
    def test_naive(self,expected):
        data = np.array(Solution.loadTxt())
        self.assertEqual(Solution.naive(data),expected)
