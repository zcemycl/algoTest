from solns.graph.graph import *
class Solution:
    @staticmethod
    def bfs_markgroup(G,s,visited):
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
    @staticmethod
    def naive(G):
        visited = [False]*(max(G)+1)
        group = []
        for i in range((max(G)+1)):
            if visited[i]==False:
                tmpg = Solution.bfs_markgroup(G,
                    i,visited)
                group.append(tmpg)
        return group