using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.DuplicateZeros{
    public class duplicateZeros{
        public static void naive(int[] arr){
            int i=0,origLen=arr.Length;
            while (i<origLen){
                if (arr[i]==0){
                    for (int j=origLen-1;j>i+1;j--){
                        arr[j] = arr[j-1];
                    }
                    arr[i+1] = 0;
                    i+=1;
                }
                i+=1;
            }
        }
    }
}
