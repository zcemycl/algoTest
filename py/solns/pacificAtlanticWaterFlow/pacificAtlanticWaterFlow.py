
class Solution:
    @staticmethod
    def naive(heights):
        rows = len(heights)
        cols = len(heights[0])
        pac = set()
        atl = set()
        def dfs(i,j,prev,allowed):
            idf = str(j)+','+str(i)
            if i>cols-1 or j>rows-1 or\
                i<0 or j<0 or idf in allowed:
                return allowed
            if heights[j][i]<prev:
                return allowed
            allowed.add(idf)
            allowed = dfs(i+1,j,heights[j][i],allowed)
            allowed = dfs(i-1,j,heights[j][i],allowed)
            allowed = dfs(i,j+1,heights[j][i],allowed)
            allowed = dfs(i,j-1,heights[j][i],allowed)
            return allowed
        for i in range(rows):
            pac = dfs(0,i,-1,pac)
        for i in range(1,cols):
            pac = dfs(i,0,-1,pac)
        for i in range(rows):
            atl = dfs(cols-1,i,-1,atl)
        for i in range(cols-1):
            atl = dfs(i,rows-1,-1,atl)
        res = []
        for pair in pac:
            if pair in atl:
                i,j = pair.split(',')
                res.append([int(i),int(j)])
        return res