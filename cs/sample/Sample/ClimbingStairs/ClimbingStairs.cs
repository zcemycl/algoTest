using System;
using System.Collections.Generic;

namespace Sample.ClimbingStairs{
    public class climbingStairs{
        public static int naive(int n){
            int n1=1;int n2=1;
            for (int i=0;i<n-1;i++){
                int tmp = n2;
                n2 += n1;
                n1 = tmp;
            }
            return n2;
        }
        public static int dp(int n){
            if (n==1)return 1;
            int[] dp = new int[n+1];
            dp[0] = 1; dp[1] = 2;
            for (int i=2;i<n+1;i++){
                dp[i] = dp[i-1]+dp[i-2];
            }
            return dp[n-1];
        }
        public static int formula(int n){
            double sqrt5 = Math.Pow(5,0.5);
            double fibn = Math.Pow((1+sqrt5)/2.0,n+1)-Math.Pow((1-sqrt5)/2.0,n+1);
            return (int)(fibn/sqrt5);
        }
    }
}
