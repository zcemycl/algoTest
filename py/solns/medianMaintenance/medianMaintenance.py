import os
from heapq import heappop,heappush,heapify
current = os.path.dirname(os.path.realpath(__file__))

class Solution:
    def __init__(self,path):
        with open(current+path,'r') as f:
            self.stream = f.readlines()
    def heap(self):
        maxH,minH,s = [],[],0
        for i,line in enumerate(self.stream):
            val = int(line.replace('\n',''))
            if len(maxH)==0 and len(minH)==0:
                heappush(maxH,-val)
            elif len(maxH)>0 and len(minH)==0: 
                if -maxH[0]<=val:
                    heappush(minH,val)
                else: 
                    swap = heappop(maxH)
                    heappush(minH,-swap)
                    heappush(maxH,-val)
            else:
                if val<=-maxH[0]:
                    heappush(maxH,-val)
                elif val>=minH[0]:
                    heappush(minH,val)
                else: 
                    heappush(maxH,-val)
            if len(maxH)-len(minH)>1:
                swap = heappop(maxH)
                heappush(minH,-swap)
            if len(minH)-len(maxH)>0:
                swap = heappop(minH)
                heappush(maxH,-swap)
            tmp = -maxH[0]
            s+=tmp
        return s%10000