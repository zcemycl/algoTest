class Solution:
    @staticmethod
    def naive(grid):
        visited = set()
        rows = len(grid)
        cols = len(grid[0])
        def dfs(i,j):
            if i>cols-1 or j>rows-1 \
                or i<0 or j<0  \
                or str(i)+','+str(j) in visited:
                return
            if grid[j][i]=="0": return
            visited.add(str(i)+','+str(j))
            dfs(i+1,j)
            dfs(i-1,j)
            dfs(i,j+1)
            dfs(i,j-1)

        res = 0
        for j in range(rows):
            for i in range(cols):
                idf = str(i)+','+str(j)
                if idf not in visited:
                    dfs(i,j)
                    if grid[j][i]=="1":
                        res+=1
        return res