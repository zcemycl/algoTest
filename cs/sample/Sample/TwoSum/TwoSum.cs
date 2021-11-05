using System;
using System.Collections.Generic;

namespace Sample.TwoSum{
    public class twoSum{
        public static int[] naive(int[] nums,int target){
            int[] v = new int[2];
            int length = nums.Length;
            for (int i=0;i<length;i++){
                for (int j=i+1;j<length;j++){
                    if (nums[i]+nums[j]==target){
                        v[0] = i; v[1] = j;
                        return v;
                    }
                }
            }
            return v;
        } 

        public static int[] hashM(int[] nums,int target){
            int[] v = new int[2];
            var map = new Dictionary<int,int>();
            for (int i=0;i<nums.Length;i++){
                int dif = target-nums[i];
                if (map.ContainsKey(dif)){
                    v[0] = i; v[1] = map[dif];
                    return v;
                }
                try{
                    map.Add(nums[i],i);
                } catch {}                
            }
            return v;
        } 
    }
} 