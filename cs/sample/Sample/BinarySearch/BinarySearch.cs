using System;
using System.Collections.Generic;

namespace Sample.BinarySearch{
    public class binarySearch{
        public static int naive(int[] nums,int target){
            int left=0,right=nums.Length-1;
            while (left<=right){
                int pt = (left+right)/2;
                if (nums[pt]>target)
                    right = pt-1;
                else if (nums[pt]<target)
                    left = pt+1;
                else return pt;
            }
            return -1;
        }
    }
}
