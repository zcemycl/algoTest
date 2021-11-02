import os
import sys
current = os.path.dirname(os.path.realpath(__file__))
parent = os.path.dirname(current)
parent2 = os.path.dirname(parent)
print(current,parent,parent2)
sys.path.append(parent)
sys.path.append(parent2)
from solns.solnSample import Solution

class Solution1(Solution):
    def soln2(int1,int2):
        return int1*int2

if __name__ == "__main__":
    s1 = Solution1(1,2)
    print(s1.soln1())
    s2 = Solution1.fromOneNumber(1)
    print(s2.soln1())
    print(Solution1.soln2(1,2))

