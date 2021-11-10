#include "validParentheses.h"

bool validParentheses::naive(string s){
    stack<char> st;
    map<char,char> d {{'(',')'},{'[',']'},{'{','}'}};
    set<char> close {')','}',']'};
    for (char c: s){
        map<char,char>::iterator it = d.find(c);
        if (it!=d.end())
            st.push(d[c]);
        if (close.find(c)!=close.end()){
            if (st.empty()) return false;
            if (st.top()!=c) return false;
            st.pop();
        }
    }
    return st.empty();
}
