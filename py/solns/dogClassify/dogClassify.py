import os
import numpy as np
current = os.path.dirname(os.path.realpath(__file__))

class Solution:
    @staticmethod
    def loadTxt():
        res = []
        with open(current+'/predictions.txt','r') as f:
            for line in f.readlines():
                line = line.split(',')
                if line[0] == "TRUE":
                    tmp = True
                else:
                    tmp = False
                res.append([tmp,int(line[1])])
        return res
    @staticmethod
    def naive(data):
        low = int(np.mean(data[data[:,0]==0,1]))
        high = int(np.mean(data[data[:,0]==1,1]))
        maxN,optimalThres = 0,low
        for thres in range(low,high+1):
            count = 0
            count+=np.sum(data[data[:,1]>=thres,0]==True)
            count+=np.sum(data[data[:,1]<thres,0]==False)
            if count>maxN:
                maxN = count
                optimalThres = thres
        return optimalThres
