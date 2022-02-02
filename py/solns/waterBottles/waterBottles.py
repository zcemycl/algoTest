class Solution:
    @staticmethod
    def naive(numBottles,numExchange):
        numEmpty,res = 0,0
        while numBottles!=0:
            res+=numBottles 
            numEmpty += numBottles
            numBottles=numEmpty//numExchange 
            numEmpty = numEmpty%numExchange
        return res
