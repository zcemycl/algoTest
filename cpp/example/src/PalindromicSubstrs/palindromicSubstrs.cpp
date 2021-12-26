#include "palindromicSubstrs.h"

void palindromicSubstrs::loop(int start,int end){
    int l=start,r=end;
    while (l>=0 && r<=this->length-1 && this->s[l]==this->s[r]){
        this->res+=1;
        l-=1;
        r+=1;
    }
}

int palindromicSubstrs::naive(string s){
    this->s = s;
    this->length = s.size();
    for (int i=0;i<this->length;i++){
        loop(i,i);
        loop(i,i+1);
    }
    return this->res;
}
