using System;
using System.Collections.Generic;

namespace Sample.Roman2Int{
    public class roman2Int{
        public static int naive(string s){
            int value = 0;
            var d = new Dictionary<char,int>(){
                {'I',1},{'V',5},{'X',10},{'L',50},
                {'C',100},{'D',500},{'M',1000}
            };
            char prev = 'I';
            for (int i=0;i<s.Length;i++){
                char tmps = s[s.Length-i-1];
                if (d[prev]>d[tmps]){
                    value-=d[tmps];
                } else {
                    value+=d[tmps];
                }
                prev = tmps;
            }
            return value;
        }
    }
}