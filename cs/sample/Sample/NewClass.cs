using System;

namespace Sample {
    public class Solution1{
        public int int1,int2;
        public Solution1(int int1,int int2){
            this.int1 = int1;
            this.int2 = int2;
        }
        public virtual int soln1(){
            return this.int1+this.int2;
        }
        public static int soln2(int x, int y){
            return x*y;
        }
    }
}