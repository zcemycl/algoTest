from solns.graph.graph import *
class Solution:
    @staticmethod
    def dfs(G,s,visited,ord,n):
        if s not in visited:
            visited.add(s)
            for child in G[s]:
                if child not in visited:    
                    ord,n = Solution.dfs(G,child,visited,ord,n)
                if ord[s] > max(G)+1:
                    ord[s] = n
                    n-=1
            if len(G[s])==0:
                ord[s] = n
                n-=1
        return ord,n
    @staticmethod
    def naive(G,visited,ord):
        n = max(G)+1
        for i in range(max(G)+1):
            if i not in visited:
                ord,n = Solution.dfs(G,i,visited,ord,n) 
        return ord