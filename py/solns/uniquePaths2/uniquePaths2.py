class Solution:
    def naive(self,obstacleGrid):
        self.rows,self.cols=len(obstacleGrid),len(obstacleGrid[0])
        if obstacleGrid[0][0]==1 or obstacleGrid[self.rows-1][self.cols-1]==1: return 0
        obstacleGrid[-1][-1]=1
        for i in range(self.cols-2,-1,-1):
            obstacleGrid[-1][i]=0 if obstacleGrid[-1][i]==1 else obstacleGrid[-1][i+1]
        for j in range(self.rows-2,-1,-1):
            obstacleGrid[j][-1]=0 if obstacleGrid[j][-1]==1 else obstacleGrid[j+1][-1]
        
        for j in range(self.rows-2,-1,-1):
            for i in range(self.cols-2,-1,-1):
                obstacleGrid[j][i]=0 if obstacleGrid[j][i]==1 else obstacleGrid[j][i+1]+obstacleGrid[j+1][i]
        return obstacleGrid[0][0]
