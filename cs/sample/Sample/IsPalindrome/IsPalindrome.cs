using System;

namespace Sample.IsPalindrome{
    public class isPalindrome{
        public static bool naive(int x){
            if (x<=0) return x==0;
            x = Math.Abs(x);
            int n = Convert.ToInt32(Math.Log10(x))+1;
            for (int i=0;i<n/2;i++){
                bool result = x/Convert.ToInt32(Math.Pow(10,n-i-1))%10 
                    == x/Convert.ToInt32(Math.Pow(10,i))%10;
                if (!result) return false;
            }
            return true;
        }
    }
}