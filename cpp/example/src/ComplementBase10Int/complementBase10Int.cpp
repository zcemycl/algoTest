#include "complementBase10Int.h"

int complementBase10Int::naive(int n){
    if (n==0) return 1 ;
    int newN=0,i=0;
    while (n!=0){
        int remain = n%2==1?0:1;
        newN += remain*pow(2,i);
        n = n>>1;
        i+=1;
    }
    return newN;
}
