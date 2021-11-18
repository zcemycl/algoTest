#include "climbingStairs.h"

int climbingStairs::naive(int n){
    int n1=1; int n2=1;
    for (int i=0;i<n-1;i++){
        int tmp = n2;
        n2 += n1;
        n1 = tmp;
    }
    return n2;
}

int climbingStairs::dp(int n){
    if (n==1) return 1;
    vector<int> dp = {1,2};
    for (int i=2;i<n+1;i++){
        dp.push_back(dp[i-1]+dp[i-2]);
    }
    return dp[n-1];
}

int climbingStairs::formula(int n){
    double sqrt5 = pow(5,0.5);
    double fibn = pow((1+sqrt5)/2.0,n+1)-pow((1-sqrt5)/2.0,n+1);
    return (int)(fibn/sqrt5);
}
