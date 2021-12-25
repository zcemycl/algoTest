#include "reverseBits.h"

long reverseBits::naive(long n){
    long res = 0;
    for (int i=0;i<32;i++){
        res = res*2+n%2;
        n = n>>1;
    }
    return res;
}
