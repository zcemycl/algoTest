#include "rotateImg.h"

void rotateImg::naive(vector<vector<int>>& matrix){
    int n = matrix.size();
    int rows = n/2;
    int cols = rows+n%2;
    for (int j=0;j<rows;j++){
        for (int i=0;i<cols;i++){
            int tmp = matrix[j][i];
            matrix[j][i]=matrix[n-i-1][j];
            matrix[n-i-1][j]=matrix[n-j-1][n-i-1];
            matrix[n-j-1][n-i-1]=matrix[i][n-j-1];
            matrix[i][n-j-1]=tmp;
        }
    }
}
