
import unittest
from parameterized import parameterized as p
from solns.loggerRateLimiter.loggerRateLimiter import *

class UnitTest_LoggerRateLimiter(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        pass
