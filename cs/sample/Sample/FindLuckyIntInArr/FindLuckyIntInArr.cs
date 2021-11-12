using System;
using System.Collections.Generic;

namespace Sample.FindLuckyIntInArr{
    public class findLuckyIntInArr{
        public static int naive(int[] arr){
            Dictionary<int,int> d = new Dictionary<int,int>();
            for (int i=0;i<arr.Length;i++)
                d[arr[i]] = d.ContainsKey(arr[i])?d[arr[i]]+1:1;
            int result = -1;
            foreach (var kvp in d){
                if (kvp.Key==kvp.Value){
                    if (kvp.Key > result)
                        result = kvp.Key;
                }
            }
            return result;
        }
    }
}
