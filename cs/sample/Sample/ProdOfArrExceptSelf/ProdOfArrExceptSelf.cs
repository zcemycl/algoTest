using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.ProdOfArrExceptSelf{
    public class prodOfArrExceptSelf{
        public static int[] naive(int[] nums){
            int Len = nums.Length;
            int[] L = Enumerable.Repeat(1,Len).ToArray();
            int[] R = Enumerable.Repeat(1,Len).ToArray();
            for (int i=1;i<Len;i++)
                L[i]=L[i-1]*nums[i-1];
            for (int i=Len-1;i>0;i--)
                R[i-1]=R[i]*nums[i];
            for (int i=0;i<Len;i++)
                nums[i]=L[i]*R[i];

            return nums;
        }
    }
}
