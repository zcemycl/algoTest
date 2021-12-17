class Solution:
    def naive(self,grid):
        rows,cols = len(grid),len(grid[0])
        self.minVal = rows*cols*100
        def dfs(i,j,route,val):
            if i<0 or j<0 or i>cols-1 or j>rows-1:
                return 
            val+=grid[j][i]
            if i==cols-1 and j==rows-1:
                print(route)
                self.minVal = min(self.minVal,val)
                return 
            dfs(i+1,j,route+[grid[j][i]],val)
            dfs(i,j+1,route+[grid[j][i]],val)
        dfs(0,0,[],0)
        return self.minVal
    @staticmethod
    def dp(grid):
        rows,cols = len(grid),len(grid[0])
        for i in range(cols-2,-1,-1):
            grid[rows-1][i]+=grid[rows-1][i+1]
        for j in range(rows-2,-1,-1):
            grid[j][cols-1]+=grid[j+1][cols-1]
        for j in range(rows-2,-1,-1):
            for i in range(cols-2,-1,-1):
                grid[j][i]+=min(grid[j+1][i],grid[j][i+1])
        return grid[0][0]