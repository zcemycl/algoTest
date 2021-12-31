import unittest
from parameterized import parameterized as p
from solns.huffmanDecoding.huffmanDecoding import *

class Node:
    def __init__(self,freq,data):
        self.freq = freq
        self.data = data
        self.left = None
        self.right = None

class UnitTest_HuffmanDecoding(unittest.TestCase):
    @p.expand([
        ["1001011","ABACA"]
    ])
    def test_naive(self,s,expected):
        n5 = Node(5,None)
        n2 = Node(2,None)
        n3 = Node(3,"A")
        n10 = Node(1,"B")
        n11 = Node(1,"C")
        n2.left = n10
        n2.right = n11
        n5.left = n2
        n5.right = n3
        self.assertEqual(Solution.decodeHuff(n5,s),expected)