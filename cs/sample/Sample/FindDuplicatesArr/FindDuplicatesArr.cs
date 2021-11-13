using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.FindDuplicatesArr{
    public class findDuplicatesArr{
        public static int[] naive(int[] nums){
            Dictionary<int,int> d=new Dictionary<int,int>();
            int[] dup = new int[]{};
            foreach (int i in nums){
                d[i] = (d.ContainsKey(i))?d[i]+1:1;
            }
            foreach (var item in d){
                if (item.Value==2){
                    int[] tmp = new int[]{item.Key};
                    dup = dup.Concat(tmp).ToArray();
                }
            }
            return dup;
        }
    }
}
