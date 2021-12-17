class Solution:
    @staticmethod
    def naive(matrix):
        rows,cols,scol=len(matrix),len(matrix[0]),set()
        for j in range(rows):
            ret = False
            for i in range(cols):
                if matrix[j][i]==0:
                    scol.add(i)
                    ret = True
            if ret:
                matrix[j]=[0]*cols
        for j in range(rows):
            for i in scol:
                matrix[j][i]=0
