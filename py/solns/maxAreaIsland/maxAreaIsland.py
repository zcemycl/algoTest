
class Solution:
    @staticmethod
    def naive(grid):
        visited = set()
        rows = len(grid)
        cols = len(grid[0])
        res = 0

        def dfs(i,j,count):
            if i>cols-1 or j>rows-1 or \
                i<0 or j<0 or str(i)+','+str(j) in visited:
                return count
            visited.add(str(i)+','+str(j))
            if not grid[j][i]:
                return count
            count += 1
            count = dfs(i+1,j,count)
            count = dfs(i-1,j,count)
            count = dfs(i,j+1,count)
            count = dfs(i,j-1,count)
            return count
        
        for j in range(rows):
            for i in range(cols):
                idf = str(i)+','+str(j)
                if idf not in visited:
                    count = dfs(i,j,0)
                    res = max(res,count)
                    
        return res