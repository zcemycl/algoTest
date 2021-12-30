class Solution:
    @staticmethod
    def naive(confusion_matrix):
        n = len(confusion_matrix)
        TP,total = 0,0
        for i in range(n):
            for j in range(n):
                if i==j: 
                    TP+=confusion_matrix[j][i]
                total+=confusion_matrix[j][i]
        return TP/total*100