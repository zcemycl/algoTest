class Solution:
    @staticmethod
    def naive(matrix):
        n = len(matrix)
        for j in range(n//2):
            for i in range(n//2+n%2):
                tmp=matrix[j][i]
                matrix[j][i]=matrix[n-i-1][j]
                matrix[n-i-1][j]=matrix[n-j-1][n-i-1]
                matrix[n-j-1][n-i-1]=matrix[i][n-j-1]
                matrix[i][n-j-1]=tmp
