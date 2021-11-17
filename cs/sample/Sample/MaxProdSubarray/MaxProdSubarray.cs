using System;
using System.Collections.Generic;

namespace Sample.MaxProdSubarray{
    public class maxProdSubarray{
        public static int naive(int[] nums){
            int maxVal = nums[0];
            int minVal = nums[0];
            int result = nums[0];
            for (int i=1;i<nums.Length;i++){
                int cur = nums[i];
                int tmpMax = Math.Max(cur,Math.Max(maxVal*cur,minVal*cur));
                minVal = Math.Min(cur,Math.Min(maxVal*cur,minVal*cur));
                maxVal = tmpMax;
                result = Math.Max(result,maxVal);
            }
            return result;
        }
    }
}
