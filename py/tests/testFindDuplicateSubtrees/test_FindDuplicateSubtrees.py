
import unittest
from parameterized import parameterized as p
from solns.findDuplicateSubtrees.findDuplicateSubtrees import *

class UnitTest_FindDuplicateSubtrees(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
