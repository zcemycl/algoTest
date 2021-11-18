using System;
using System.Collections.Generic;

namespace Sample.ContainerWithMostH2O{
    public class containerWithMostH2O{
        public static int naive(int[] height){
            int l=0;int r=height.Length-1;
            int maxV = Math.Min(height[l],height[r])*r;
            while (l<r){
                if (height[l]>=height[r]) r-=1;
                else l+=1;
                maxV = Math.Max(maxV,Math.Min(height[l],height[r])*(r-l));
            }
            return maxV;
        }
    }
}
