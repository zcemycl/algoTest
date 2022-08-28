import unittest

from parameterized import parameterized as p
from web.utils.utils import *


class UnitTest_Utils(unittest.TestCase):
    @p.expand([
        [1,2,3],[100,10,110]
    ])
    def test_add(self,x,y,expected):
        self.assertEqual(Utils.add(x,y),expected)
