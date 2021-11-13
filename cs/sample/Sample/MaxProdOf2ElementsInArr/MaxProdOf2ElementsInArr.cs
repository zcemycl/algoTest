using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.MaxProdOf2ElementsInArr{
    public class maxProdOf2ElementsInArr{
        public static int naive(int[] nums){
            int first = nums.Take(2).ToArray().Min();
            int second = nums.Take(2).ToArray().Max();
            foreach (int n in nums.Skip(2).ToArray()){
                if (n>first){
                    if (n>second){
                        int tmp = second;
                        second =n;
                        first = tmp;
                    } else first = n;
                }
            }
            return (first-1)*(second-1);
        }
    }
}
