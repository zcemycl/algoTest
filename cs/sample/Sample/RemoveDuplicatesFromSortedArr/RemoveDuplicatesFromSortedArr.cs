using System;

namespace Sample.RemoveDuplicatesFromSortedArr{
    public class removeDuplicatesFromSortedArr{
        public static int naive(int[] nums){
            if (nums.Length <= 1) return nums.Length;
            int maxVal = nums[0];
            int ptid = 1;
            for (int i=1;i<nums.Length;i++){
                if (nums[i]>maxVal){
                    maxVal = nums[i];
                    int tmp = nums[i];
                    nums[i] = nums[ptid];
                    nums[ptid] = tmp;
                    ptid += 1;
                }
            }
            return ptid;
        }
    }
}