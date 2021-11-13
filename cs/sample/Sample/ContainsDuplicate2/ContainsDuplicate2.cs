using System;
using System.Collections.Generic;

namespace Sample.ContainsDuplicate2{
    public class containsDuplicate2{
        public static bool naive(int[] nums,int k){
            Dictionary<int,int> prevIdxDict=new Dictionary<int,int>();
            for (int i=0;i<nums.Length;i++){
                if (prevIdxDict.ContainsKey(nums[i]) && 
                    Math.Abs(i-prevIdxDict[nums[i]])<=k) return true;
                prevIdxDict[nums[i]] = i;
            }
            return false;
        }
    }
}
