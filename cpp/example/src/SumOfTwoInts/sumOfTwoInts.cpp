#include "sumOfTwoInts.h"

int sumOfTwoInts::naive(int a,int b){
    while (b){
        unsigned tmp = (unsigned)(a&b)<<1;
        a^=b;
        b = tmp;
    }
    return a;
}
