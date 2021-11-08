import unittest
from solns.solnSample import *


class TestCase(unittest.TestCase):
    def test_classmethod(self):
        s = Solution.fromOneNumber(1)
        self.assertEqual(s.soln1(),2)

    def test_abstractmethod(self):
        s = Solution(1,2)
        self.assertEqual(s.soln1(),3)

    def test_staticSoln2(self):
        self.assertEqual(Solution.soln2(1,2),3)

if __name__ == '__main__':
    unittest.main()
