#include "plusOne.h"

vector<int> plusOne::naive(vector<int>& digits){
    int Len = digits.size();
    int s = 1;
    for (int i=0;i<Len;i++){
        int total = digits[Len-i-1]+s;
        s = total/10;
        int r = total%10;
        digits[Len-i-1]=r;
    }
    if (s!=0){
        auto itPos = digits.begin();
        auto newIt = digits.insert(itPos,s);
    }
    return digits;
}