using System;
using System.Collections.Generic;

namespace Sample.BubbleSort{
    public class bubbleSort{
        public static int[] naive(int[] nums){
            for (int i=0;i<nums.Length;i++){
                for (int j=i+1;j<nums.Length;j++){
                    if (nums[i]>nums[j]){
                        (nums[i],nums[j])=(nums[j],nums[i]);
                    }
                }
            }
            return nums;
        }
    }
}
