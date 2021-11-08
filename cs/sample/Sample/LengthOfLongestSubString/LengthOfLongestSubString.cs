using System;
using System.Linq;

namespace Sample.LengthOfLongestSubString{
    public class lengthOfLongestSubString{
        public static int naive(string s){
            int maxLen = 0;
            char[] tmp = {};
            for (int i=0;i<s.Length;i++){
                if (tmp.Contains(s[i])){
                    int tmpind = Array.IndexOf(tmp,s[i]);
                    tmp = tmp.Skip(tmpind+1).ToArray();
                    Array.Resize(ref tmp,tmp.Length+1);
                    tmp[tmp.GetUpperBound(0)] = s[i];
                } else {
                    Array.Resize(ref tmp,tmp.Length+1);
                    tmp[tmp.GetUpperBound(0)] = s[i];
                }              
                if (tmp.Length > maxLen)
                    maxLen = tmp.Length;  
                for (int j=tmp.GetLowerBound(0);j<=tmp.GetUpperBound(0);j++){
                    Console.Write(tmp[j]);
                    Console.Write(" ");
                }
                Console.WriteLine();
                
            }
            return maxLen;
            
        }

    }
}