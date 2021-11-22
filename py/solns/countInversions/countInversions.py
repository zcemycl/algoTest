import os
current = os.path.dirname(os.path.realpath(__file__))
class Solution:
    @staticmethod
    def loadtxt2arr():
        result = []
        with open(current+'/IntegerArray.txt','r') as f:
            for line in f.readlines():
                result.append(int(line.strip()))
        return result
    @staticmethod
    def naive():
        pass
