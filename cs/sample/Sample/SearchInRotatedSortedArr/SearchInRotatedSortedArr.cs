using System;
using System.Collections.Generic;

namespace Sample.SearchInRotatedSortedArr{
    public class searchInRotatedSortedArr{
        public static int naive(int[] nums,int target){
            int l=0,r=nums.Length-1;
            while (l<=r){
                int m = (l+r)/2;
                if (target==nums[m]) return m;
                if (nums[m]>=nums[l]){
                    if (target<nums[m] && target>=nums[l]) 
                        r = m-1;
                    else l = m+1;
                } else {
                    if (target<=nums[r] && target>nums[m])
                        l = m+1;
                    else r = m-1;
                }
            }
            return -1;
        }
    }
}
