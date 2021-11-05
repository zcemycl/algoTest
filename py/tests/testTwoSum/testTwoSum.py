import unittest
from solns.twoSum.twoSum import *
from solns.wrapper import *

class TestCase(unittest.TestCase):
    @timeit
    def test_naive(self):
        self.assertEqual(Solution.naive([3,2,4],6),[1,2])
    @timeit
    def test_naive1(self):
        self.assertEqual(Solution.naive([2,7,11,15],9),[0,1])
    @timeit
    def test_naive2(self):
        self.assertEqual(Solution.naive([3,3],6),[0,1])
    @timeit
    def test_hash(self):
        self.assertEqual(Solution.hash([3,2,4],6),[2,1])
    @timeit
    def test_hash1(self):
        self.assertEqual(Solution.hash([2,7,11,15],9),[1,0])
    @timeit
    def test_hash2(self):
        self.assertEqual(Solution.hash([3,3],6),[1,0])

if __name__ == '__main__':
    unittest.main()

