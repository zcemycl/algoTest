using System;
using System.Collections.Generic;

namespace Sample.RmElement{
    public class rmElement{
        public static int naive(int[] nums,int val){
            int ptid=0;
            for (int i=0;i<nums.Length;i++){
                if (nums[i]!=val){
                    int tmp = nums[ptid];
                    nums[ptid]=nums[i];
                    nums[i]=tmp;
                    ptid+=1;
                }
            }
            return ptid;
        }
    }
}
