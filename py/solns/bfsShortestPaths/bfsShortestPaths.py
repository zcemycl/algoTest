from solns.graph.graph import *
class Solution:
    @staticmethod
    def naive(G,s):
        visited = [False]*(max(G)+1)
        q = [s]
        visited[s] = True
        d = [(max(G)+1)**2]*(max(G)+1)
        d[s] = 0
        while len(q)!=0:
            parent = q.pop(0)
            for child in G[parent]:
                if visited[child]==False:
                    q.append(child)
                    d[child] = d[parent]+1
                    visited[child] = True
        return d
