from collections import defaultdict
class Solution:
    @staticmethod
    def graph(n,prerequisites):
        adj = {i:[] for i in range(n)}
        for u,v in prerequisites:
            adj[u].append(v)
        visited = set()
        def dfs(i):
            if i in visited: return False
            if len(adj[i])==0: 
                return True
            visited.add(i)
            for pre in adj[i]:
                if not dfs(pre): return False
            visited.remove(i)
            adj[i] = []
            return True
        for i in range(n):
            if not dfs(i): return False
        return True