class Solution:
    @staticmethod
    def naive(n,edges):
        adj = {i:[] for i in range(n)}
        for u,v in edges:
            adj[u].append(v)
            adj[v].append(u)

        # no cycle, only one fully connected tree
        visited = set()
        def dfs(i,fro):
            if i in visited: 
                return False
            visited.add(i)
            for child in adj[i]:
                if child != fro:
                    if not dfs(child,i): return False
            return True

        if not dfs(0,-1): return False
        if len(visited)!=n: return False
        return True