using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.Add2IntArr{
    public class add2IntArr{
        public static int[] naive(int[] num,int k){
            int Len = num.Length;
            for (int i = 0; i < Len; i++){
                int total = num[Len-i-1]+k%10;
                num[Len-i-1] = total%10;
                k/=10; k+=total/10; 
            }
            while (k!=0){
                int[] newK = new int[]{k%10};
                num = newK.Concat(num).ToArray();
                k/=10;
            }
            return num;
        }
    }
}
