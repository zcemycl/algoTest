using System;
using System.Collections.Generic;

namespace Sample.NumDifferentIntsInStr{
    public class numDifferentIntsInStr{
        public static int naive(string word){
            HashSet<int> count = new HashSet<int>();
            HashSet<char> s = new HashSet<char>(){
                '1','2','3','4','5','6','7','8','9','0'
            };
            string prev = "";
            foreach (char c in word){
                if (s.Contains(c)){
                    prev+=c;
                } else {
                    if (prev.Length!=0 && 
                        !count.Contains(Int32.Parse(prev))){
                            count.Add(Int32.Parse(prev));
                        }
                    prev = "";
                }
            }
            if (prev.Length!=0 && 
                !count.Contains(Int32.Parse(prev))){
                    count.Add(Int32.Parse(prev));
                }
            return count.Count;
        }
    }
}
