using System;
using System.Collections.Generic;

namespace Sample.ContainsDuplicate{
    public class containsDuplicate{
        public static bool naive(int[] nums){
            HashSet<int> d = new HashSet<int>();
            foreach (int i in nums){
                if (d.Contains(i)) return true;
                d.Add(i);
            }
            return false;
        }
    }
}
