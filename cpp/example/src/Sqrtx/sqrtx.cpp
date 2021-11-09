#include "sqrtx.h"

int sqrtx::binary(int n){
    if (n<=1) return n;
    int left=2,right=n/2;
    while (left<=right){
        int p = left+(right-left)/2;
        int num=p*p;
        if (num>n){right = p-1;}
        else if (num<n){left = p+1;}
        else {return p;}
    }
    return right;
}