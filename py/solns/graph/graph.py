from collections import defaultdict
class Graph:
    def __init__(self):
        self.graph = defaultdict(list) # adjacent list method
    def addEdge(self,u,v):
        self.graph[u].append(v)
    def addEdges(self,u,ls):
        self.graph[u]+=ls