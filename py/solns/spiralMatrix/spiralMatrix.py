class Solution:
    @staticmethod
    def naive(matrix):
        rows,cols,res = len(matrix),len(matrix[0]),[]
        def cycle(sx,ex,sy,ey):
            include = []
            dfx,dfy = ex-sx,ey-sy
            if dfx==1 or dfy==1:
                if dfx>=1 and dfy==1:
                    include.append((sx,ex,sy,sy+1,1))
                elif dfx==1 and dfy>1:
                    include.append((sx,sx+1,sy,ey,1))
            else:
                include.append((sx,ex-1,sy,sy+1,1))
                include.append((ex-1,ex,sy,ey-1,1))
                include.append((ex-1,sx,ey-1,ey-2,-1))
                include.append((sx,sx-1,ey-1,sy,-1))
            for rsx,rex,rsy,rey,step in include:
                for j in range(rsy,rey,step):
                    for i in range(rsx,rex,step):
                        res.append(matrix[j][i])
        lowx,highx,lowy,highy=0,cols,0,rows
        for _ in range(min(rows//2+rows%2,cols//2+cols%2)):
            cycle(lowx,highx,lowy,highy)
            lowx+=1
            lowy+=1
            highx-=1
            highy-=1
        return res