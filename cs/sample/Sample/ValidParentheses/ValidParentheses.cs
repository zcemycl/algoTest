using System;
using System.Collections.Generic;

namespace Sample.ValidParentheses{
    public class validParentheses{
        public static bool naive(string s){
            Stack<char> st = new Stack<char>();
            Dictionary<char,char> d = new Dictionary<char,char>(){
                {'(',')'},{'[',']'},{'{','}'}};
            HashSet<char> close = new HashSet<char>(){')','}',']'};
            foreach (char c in s){
                if (d.ContainsKey(c))
                    st.Push(d[c]);
                if (close.Contains(c)){
                    if (st.Count==0) return false;
                    char tmp = st.Pop();
                    if (tmp!=c) return false;
                }
            }
            return st.Count==0;
        }
    }
}
