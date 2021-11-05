using System;
using Sample.NewClass1;
using Sample.TwoSum;

namespace Sample
{
    public class Solution{
        public int int1,int2;
        public Solution (int int1, int int2){
            this.int1 = int1;
            this.int2 = int2;
        }
        public virtual int soln1(){
            return this.int1+this.int2;
        }

        public static int soln2(int x, int y){
            return x+y;
        }
    }
    
    public class Program
    {
        static void Main(string[] args)
        {
            Solution s1 = new Solution(1,2);
            Console.WriteLine(s1.soln1());
            Console.WriteLine(Solution.soln2(1,2));

            Solution1 s2 = new Solution1(100,100);
            Console.WriteLine(s2.soln1());
            Console.WriteLine(Solution1.soln2(4,4));

            Solution2 s3 = new Solution2(1,2);
            Solution2.soln3();
            Console.WriteLine(s3.a);
            Console.WriteLine(s3.int1);
            Console.WriteLine(s3.soln1());
            Console.WriteLine(Solution2.soln2(3,3));

            Console.WriteLine("------------ TwoSum ---------");
            int[] arr = new int[3] {2,4,1};
            int tar = 6;
            int[] outarr = twoSum.hashM(arr,tar);
            foreach(int i in outarr){
                Console.WriteLine(i);
            }           


        }

    }
}
