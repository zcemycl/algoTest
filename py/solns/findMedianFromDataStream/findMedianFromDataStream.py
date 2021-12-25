from heapq import heappop,heappush
class Solution:
    def __init__(self):
        self.maxH,self.minH,self.count = [],[],0
    def addNum(self,num):
        if self.count<=1:
            heappush(self.maxH,-num)
        else:
            if self.minH[0]<=num:
                heappush(self.minH,num)
            else:
                heappush(self.maxH,-num)
        if len(self.maxH)-len(self.minH)>1:
            swap = -heappop(self.maxH)
            heappush(self.minH,swap)
        if len(self.minH)-len(self.maxH)>0:
            swap = -heappop(self.minH)
            heappush(self.maxH,swap)
        self.count+=1
    def findMedian(self):
        return -self.maxH[0] if self.count%2==1 else (-self.maxH[0]+self.minH[0])/2
