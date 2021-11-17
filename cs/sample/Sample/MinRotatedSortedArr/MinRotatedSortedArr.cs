using System;
using System.Collections.Generic;

namespace Sample.MinRotatedSortedArr{
    public class minRotatedSortedArr{
        public static int naive(int[] n){
            int result = n[0];
            int l=0,r=n.Length-1;
            while (l<r){
                int m = (l+r)/2;
                if (n[m]>n[l])
                    l = m;
                else if (n[m]<n[r])
                    r = m;
                if (l==r-1)
                    break;
            }
            return Math.Min(result,n[r]);
        }
    }
}
