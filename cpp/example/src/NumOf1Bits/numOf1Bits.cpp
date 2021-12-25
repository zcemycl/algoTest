#include "numOf1Bits.h"

int numOf1Bits::naive(int n){
    int res = 0;
    while (n!=0){
        n = n&(n-1);
        res+=1;
    }
    return res;
}
