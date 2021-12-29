
import unittest
from parameterized import parameterized as p
from solns.iceCreamMachine.iceCreamMachine import *

class UnitTest_IceCreamMachine(unittest.TestCase):
    @p.expand([
        [[['vanilla','chocolate sauce'],
        ['chocolate','chocolate sauce']]]
    ])
    def test_naive(self,expected):
        machine = IceCreamMachine(["vanilla", "chocolate"], ["chocolate sauce"])
        self.assertEqual(machine.scoops(),expected)
