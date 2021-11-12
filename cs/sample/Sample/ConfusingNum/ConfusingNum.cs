using System;
using System.Collections.Generic;

namespace Sample.ConfusingNum{
    public class confusingNum{
        public static bool naive(int n){
            if (n==0) return false;
            int orig = n, newN = 0, nDigits = (int) Math.Log10(n);
            HashSet<int> non_reversible = new HashSet<int>(){2,3,4,5,7};
            Dictionary<int,int> reversible = new Dictionary<int,int>(){
                    {0,0},{1,1},{6,9},{8,8},{9,6}
                };    
            for (int i=0;i<nDigits+1;i++){
                int remain = n%10;
                if (non_reversible.Contains(remain)) return false;
                if (reversible.ContainsKey(remain)) 
                    newN = newN*10+reversible[remain];
                n = n/10;
            }                    
            return orig!=newN;
        }
    }
}
