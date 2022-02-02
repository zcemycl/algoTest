class Solution:
    def naive(self,grid):
        self.directions = [(1,0),(0,1),(-1,0),(0,-1),
                     (1,1),(1,-1),(-1,1),(-1,-1)]
        self.rows,self.cols = len(grid),len(grid[0])
        if grid[0][0]==1 or \
            grid[self.rows-1][self.cols-1]==1: return -1
        self.steps=0
        self.minPath = float('inf')
        def dfs(i,j):
            if i<0 or j<0 or i>self.cols-1 or \
                j>self.rows-1:
                return
            if grid[j][i]==1:
                return
            if i==self.cols-1 and j==self.rows-1:
                L = self.steps+1
                if self.minPath>L:
                    self.minPath=L
                return 
            
            self.steps+=1
            tmp = grid[j][i]
            grid[j][i]=1
            for di,dj in self.directions:
                dfs(i+di,j+dj)
            self.steps-=1
            grid[j][i]=tmp
        dfs(0,0)
        return self.minPath if self.minPath!=float('inf') else -1
    def bfs(self,grid):
        self.directions = [(1,0),(0,1),(-1,0),(0,-1),
                     (1,1),(1,-1),(-1,1),(-1,-1)]
        self.rows,self.cols = len(grid),len(grid[0])
        if grid[0][0]==1 or \
            grid[self.rows-1][self.cols-1]==1: return -1
        queue = [(0,0)]
        grid[0][0] = 1
        while queue:
            i,j = queue.pop(0)
            dist = grid[j][i]
            if (i,j)==(self.cols-1,self.rows-1):
                return dist
            for di,dj in self.directions:
                i_,j_ = i+di,j+dj
                if i_<0 or j_<0 or i_>self.cols-1 or j_>self.rows-1:
                    continue
                if grid[j_][i_]!=0:
                    continue
                grid[j_][i_]=dist+1
                queue.append((i_,j_))
        return -1
