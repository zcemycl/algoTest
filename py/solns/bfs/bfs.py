from solns.graph.graph import *

class Solution:
    @staticmethod
    def naive(G,s):
        visited = [False]*(max(G)+1)
        q = [s]
        visited[s] = True
        seq = ""
        while len(q)!=0:
            parent = q.pop(0)
            seq+=str(parent)
            for child in G[parent]:
                if visited[child]==False:
                    q.append(child)
                    visited[child] = True
        return seq