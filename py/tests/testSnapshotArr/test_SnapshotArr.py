
import unittest
from parameterized import parameterized as p
from solns.snapshotArr.snapshotArr import *

class UnitTest_SnapshotArr(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
