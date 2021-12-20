import os
from heapq import heappop,heappush
from collections import defaultdict
current = os.path.dirname(os.path.realpath(__file__))

class Graph:
    def __init__(self):
        self.graph = defaultdict(dict)
    def addEdge(self,u,v,length):
        self.graph[u][v] = length

class Solution:
    def __init__(self,path):
        self.G = Graph()
        self.maxNode = 1
        with open(current+path,'r') as f:
            for line in f.readlines():
                preprocess = line.split('\t')
                u = int(preprocess[0])
                for items in preprocess[1:-1]:
                    v,length = map(int,items.split(','))
                    self.G.addEdge(u,v,length)
                    self.maxNode = max(self.maxNode,u,v)
        print(self.maxNode)
    def naive(self,u):
        d = {i:float('inf') for i in range(1,self.maxNode+1)}
        d[u] = 0 
        queue = [u]
        while queue!=[]:
            tmpu = queue.pop(0)
            for child in self.G.graph[tmpu]:
                distance = d[tmpu]+self.G.graph[tmpu][child]
                if distance<d[child]:
                    d[child]=distance
                    queue.append(child)
                    
        return d
    def heap(self,u):
        d = {i:float('inf') for i in range(1,self.maxNode+1)}
        d[u] = 0 
        queue,visited = [(0,u)],set()
        while queue:
            cost,tmpu = heappop(queue)
            if tmpu not in visited:
                visited.add(tmpu)
                for child in self.G.graph[tmpu]:
                    distance = cost+self.G.graph[tmpu][child]
                    if distance<d[child]:
                        d[child]=distance
                        heappush(queue,(d[child],child))
        return d
