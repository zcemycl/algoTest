using System; 
using System.Linq;

namespace Sample.PlusOne{
    public class plusOne{
        public static int[] naive(int[] digits){
            int Len = digits.Length;
            int s = 1;
            for (int i=0;i<Len;i++){
                int total = digits[Len-i-1]+s;
                s = total/10;
                int r = total%10;
                digits[Len-i-1]=r;
            }
            if (s!=0){
                int[] sArr = new int[]{s};
                digits = sArr.Concat(digits).ToArray();
            }
            return digits;
        }   
    }
}