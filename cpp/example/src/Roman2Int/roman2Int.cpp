#include "roman2Int.h"

int roman2Int::naive(string s){
    int value = 0;
    map<char,int> d = {{'I',1},{'V',5},{'X',10},
        {'L',50},{'C',100},{'D',500},{'M',1000}};
    char prev = 'I';
    for (int i=0;i<s.length();i++){
        char tmps = s[s.length()-i-1];
        if (d[prev]>d[tmps]){
            value -= d[tmps];
        } else {
            value += d[tmps];
        }
        prev = tmps;
    }
    return value;
}