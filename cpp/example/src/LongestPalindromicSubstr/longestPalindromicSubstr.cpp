#include "longestPalindromicSubstr.h"

// int longestPalindromicSubstr::naive(int n){
//     return n;
// }

longestPalindromicSubstr::longestPalindromicSubstr(){
    this->res = "";
    this->maxLen = 0;
};
void longestPalindromicSubstr::loop(int start,int end){
    int l=start,r=end;
    while (l>=0 && r<=length-1 && this->s[l]==this->s[r]){
        if (r-l+1>this->maxLen){
            this->maxLen = r-l+1;
            this->res = this->s.substr(l,r-l+1);
        }
        l-=1;
        r+=1;
    }
};

string longestPalindromicSubstr::naive(string s){
    this->s = s;
    this->length = s.size();
    for (int i=0;i<length;i++){
        loop(i,i);
        loop(i,i+1);
    }
    return this->res;
};