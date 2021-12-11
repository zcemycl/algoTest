
import unittest
from parameterized import parameterized as p
from solns.alienDict.alienDict import *

class UnitTest_AlienDict(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
