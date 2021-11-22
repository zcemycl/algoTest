using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.MergeSort{
    public class mergeSort{
        public static int[] merge(int[] a,int[] b){
            int i=0;int j=0;int k=0;
            int[] result = new int[a.Length+b.Length];
            while (i<a.Length&&j<b.Length){
                if (a[i]<b[j]){
                    result[k] = a[i];
                    k++; i++;
                } else {
                    result[k] = b[j];
                    k++; j++;
                }
            }
            while (i<a.Length){
                result[k] = a[i];
                k++; i++;
            }
            while (j<b.Length){
                result[k] = b[j];
                k++; j++;
            }
            return result;
        }
        public static int[] naive(int[] nums){
            if (nums.Length<=1) return nums;
            int n = nums.Length/2;
            int[] L = nums.Take(n).ToArray();
            int[] R = nums.Skip(n).Take(nums.Length-n).ToArray();
            L = mergeSort.naive(L);
            R = mergeSort.naive(R);
            nums = mergeSort.merge(L,R);
            return nums;
        }
    }
}
