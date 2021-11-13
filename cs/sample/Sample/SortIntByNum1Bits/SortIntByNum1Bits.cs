using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.SortIntByNum1Bits{
    public class sortIntByNum1Bits{
        public static int Compare(int x,int y){
            string sx = Convert.ToString(x,2);
            string sy = Convert.ToString(y,2);
            int num1x = sx.Count(f => (f == '1'));
            int num1y = sy.Count(g => (g == '1'));
            if (x<y) return 0;
            if (num1x<num1y) return 0;
            return 1;
        }
        public static int[] naive(int[] arr){
            Array.Sort<int>(arr,sortIntByNum1Bits.Compare);
            return arr;
        }
    }
}
