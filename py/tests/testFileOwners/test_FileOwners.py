
import unittest
from parameterized import parameterized as p
from solns.fileOwners.fileOwners import *

class UnitTest_FileOwners(unittest.TestCase):
    @p.expand([
        ['Randy', ['Input.txt', 'Output.txt']],
        ['Stan',['Code.py']]
    ])
    def test_naive(self,name,expected):
        files = {
            'Input.txt': 'Randy',
            'Code.py': 'Stan',
            'Output.txt': 'Randy'
        }       
        self.assertEqual(Solution.naive(files)[name],expected)
