class Solution:
    @staticmethod
    def naive(n,edges):
        adj = {i:[] for i in range(n)}
        visited = set()
        for u,v in edges:
            adj[u].append(v)
            adj[v].append(u)

        def dfs(i):
            if i in visited: return
            visited.add(i)
            for neighbor in adj[i]:
                dfs(neighbor)

        res = 0
        for i in range(n):
            if i not in visited:
                dfs(i)
                res+=1
        return res