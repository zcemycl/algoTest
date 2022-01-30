class Solution:
    def naive(self,grid,k):
        self.steps = 0
        self.k = k
        self.res = float('inf')
        self.visited = set()
        rows,cols = len(grid),len(grid[0])
        def recur(i,j):
            if j==rows-1 and i==cols-1:
                if self.steps<self.res:
                    self.res=self.steps
                return 
            if i<0 or j<0 or i>=cols or j>=rows or (i,j) in self.visited:
                return
            if grid[j][i]==1:
                if self.k>0:
                    self.k-=1
                else:
                    return
            self.steps+=1
            self.visited.add((i,j))
            for rstep,cstep in [(0,-1),(0,1),(-1,0),(1,0)]:
                recur(i+cstep,j+rstep)
            if grid[j][i]==1:
                self.k+=1
            self.steps-=1
            self.visited.remove((i,j))
        recur(0,0)
        return self.res if self.res!=float('inf') else -1
    def dynamicProg(self,grid,k):
        pass