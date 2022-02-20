class Solution:
    @staticmethod
    def naive(matrix,target):
        rows = len(matrix)
        if rows==0:
            return False
        cols = len(matrix[0])
        # for rows
        l,r,m = 0,rows-1,0
        while l<r:
            m = (l+r)//2
            if target<matrix[m][0]:
                r = m
            else:
                l = m
            if matrix[m][0]<=target<matrix[m+1][0]:
                break
            else:
                if r==rows-1 and target>=matrix[r][0]:
                    m = r
                    break
        targetRow = m
        # for cols 
        l,r,m = 0,cols-1,0
        while l<r:
            m = (l+r)//2
            if target<matrix[targetRow][m]:
                r = m
            elif target>matrix[targetRow][m]:
                l = m
            else:
                return True
            if l+1==r:
                break
        if matrix[targetRow][l]==target or matrix[targetRow][r]==target:
            return True
        return False