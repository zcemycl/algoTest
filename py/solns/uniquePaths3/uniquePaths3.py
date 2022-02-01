class Solution:
    def naive(self,grid):
        self.no0,self.start = 0,None
        self.rows,self.cols=len(grid),len(grid[0])
        self.directions=[(0,1),(1,0),(0,-1),(-1,0)]
        # visited=set()
        for j in range(self.rows):
            for i in range(self.cols):
                if grid[j][i]==0:
                    self.no0+=1
                elif grid[j][i]==1:
                    self.start=(i,j)
                    self.no0+=1
        self.res,self.steps = 0,0
        def dfs(i,j):
            if i<0 or j<0 or i>self.cols-1 or j>self.rows-1:
                return
            if grid[j][i]==-1:
                return
            if grid[j][i]==2:
                if self.steps==self.no0:
                    # print(visited)
                    self.res+=1
                return
            self.steps+=1
            # visited.add((i,j))
            tmp = grid[j][i]
            grid[j][i]=-1
            for di,dj in self.directions:
                dfs(i+di,j+dj)
            self.steps-=1
            # visited.remove((i,j))
            grid[j][i]=tmp
        dfs(self.start[0],self.start[1])
        return self.res
