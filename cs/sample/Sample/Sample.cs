using System;

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
            Console.WriteLine("Hello World!");
            Solution s1 = new Solution(1,2);
            Console.WriteLine(s1.soln1());
            Console.WriteLine(Solution.soln2(1,2));
        }

    }
}
