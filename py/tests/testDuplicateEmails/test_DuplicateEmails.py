
import unittest
from parameterized import parameterized as p
from solns.duplicateEmails.duplicateEmails import *

class UnitTest_DuplicateEmails(unittest.TestCase):
    @p.expand([
        ["a@b.com"]
    ])
    def test_naive(self,expected):
        self.assertEqual(Solution.naive(),expected)
