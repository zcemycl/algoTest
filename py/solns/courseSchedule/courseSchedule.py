from collections import defaultdict
class Solution:
    @staticmethod
    def naive(n,prerequisites):
        adj = {i:[] for i in range(n)}
        for pre in prerequisites:
            adj[pre[0]].append(pre[1])
        visited = set()
        def dfs(c):
            if c in visited: return False
            if adj[c] == []:
                return True
            visited.add(c)
            for pre in adj[c]:
                if not dfs(pre): return False
            visited.remove(c)
            adj[c] = []
            return True
        for c in range(n):
            if not dfs(c): return False
        return True