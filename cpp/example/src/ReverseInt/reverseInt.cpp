#include "reverseInt.h"

int reverseInt::naive(int x){
    int newX=0;
    while (x!=0){
        int remain = x%10;
        x /= 10;
        newX = newX*10+remain;
        if (newX>INT_MAX/10 || (newX==INT_MAX/10 && remain>7)) 
            return 0;
        if (newX<INT_MIN/10 || (newX==INT_MIN/10 && remain<-8)) 
            return 0;
    }
    return newX;
}
