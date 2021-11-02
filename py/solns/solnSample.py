from abc import abstractmethod

class Solution:
    def __init__(self,int1,int2):
        self.int1 = int1
        self.int2 = int2

    @classmethod
    def fromOneNumber(cls,int1,mode='same'):
        return cls(int1,int1)

    @abstractmethod
    def soln1(self):
        return self.int1+self.int2

    @staticmethod
    def soln2(int1,int2):
        return int1+int2


if __name__ == "__main__":
    s1 = Solution(1,2)
    print(s1.soln1())
    s2 = Solution.fromOneNumber(1)
    print(s2.soln1())
    print(Solution.soln2(1,2))
