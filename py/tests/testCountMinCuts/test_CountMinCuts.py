import unittest
from parameterized import parameterized as p
from solns.countMinCuts.countMinCuts import *

class UnitTest_CountMinCuts(unittest.TestCase):
    @p.expand([
        []
    ])
    def test_naive(self):
        graph,total = Solution.loadGraph()
        lowest = total**2
        start = 0
        numTrials = 20
        seedid = 0
        for i in range(start+numTrials):
            seed(i)
            tmpG,tmpT = copy.deepcopy(graph),copy.deepcopy(total)
            c = Solution.naive(tmpG,tmpT)
            if c<lowest:
                lowest = c 
                seedid = i
        print("Seed Id and Min Cut: ",seedid,lowest)
        self.assertLessEqual(lowest,20)