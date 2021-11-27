from solns.graph.graph import *
class Solution:
    @staticmethod
    def naive(G,s,visited,seq):
        if s not in visited:
            visited.add(s)
            seq+=str(s)
            for child in G[s]:
                seq = Solution.naive(G,child,visited,seq)
        return seq