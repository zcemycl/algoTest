using System;
using System.Collections.Generic;

namespace Sample.MaxSubarray{
    public class maxSubarray{
        public static int naive(int[] nums){
            int maxVal = nums[0]; int accum = nums[0];
            for (int i=1;i<nums.Length;i++){
                accum += nums[i];
                accum = Math.Max(accum,nums[i]);
                maxVal = Math.Max(accum,maxVal);
            }
            return maxVal;
        }
    }
}
