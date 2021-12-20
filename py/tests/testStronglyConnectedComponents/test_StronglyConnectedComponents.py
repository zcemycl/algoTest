from solns.graph.graph import *
import unittest
from parameterized import parameterized as p
from solns.stronglyConnectedComponents.stronglyConnectedComponents import *

class UnitTest_StronglyConnectedComponents(unittest.TestCase):
    @p.expand([
        ['/SCCsimple.txt',[3,3,3,1]]
    ])
    def test_recursive(self,path,expected):
        s = Solution(path)
        self.assertEqual(s.kosarajuTwoPassRecursive(),expected)
    @p.expand([
        ['/SCCsimple.txt',[3,3,3,1]],
        # ['/SCC.txt',[412,381,246,238,217]]
    ])
    def test_loop(self,path,expected):
        s = Solution(path)
        print(s.maxNode)
        self.assertEqual(s.kosarajuTwoPassLoop(),expected)