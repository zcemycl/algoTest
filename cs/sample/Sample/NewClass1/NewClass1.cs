using System;
using Sample;

namespace Sample.NewClass1{
    public class Solution2:Solution1{
        public int a=0,b=1;
        public Solution2(int int1,int int2):base(int1,int2){

        }
        public override int soln1(){
            return this.int1*this.int2;
        }
        public static void soln3(){
            Solution1 s2 = new Solution1(1,4);
            Console.WriteLine(s2.soln1());
        }
    }
}