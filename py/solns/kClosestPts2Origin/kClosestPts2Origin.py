from heapq import heappop,heappush,heapify,heappushpop
class Solution:
    def sqDist(self,point):
        return point[0]**2+point[1]**2
    def naive(self,points):
        heap = [(-self.sqDist(points[i]),i) for i in range(k)]
        heapify(heap)
        for i in range(k,len(points)):
            dist=-self.sqDist(points[i])
            if dist>heap[0][0]:
                heappushpop(heap,(dist,i))
        return [points[i] for (_,i) in heap]        
