using System;
using System.Collections.Generic;

namespace Sample.FindNuniqueIntSum2Zero{
    public class findNuniqueIntSum2Zero{
        public static int[] naive(int n){
            int[] result = new int[n];
            int i = 0, j = 0;
            if (n%2==1) 
                result[i] = j;
            i+=1;j+=1;
            while (i<n){
                result[i] = j;
                result[i+1] = -j;
                i+=2;j+=1;
            }
            return result;
        }
    }
}
