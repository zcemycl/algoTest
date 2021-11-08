#include "isPalindrome.h"

using namespace std;

bool isPalindrome::naive(int x){
    if (x<=0) return x==0;
    x = abs(x);
    int n = log10(x)+1;
    for (int i=0;i<n/2;i++){
        bool result = (x/(int)pow(10,n-i-1)%10 
            == x/(int)pow(10,i)%10);
        if (!result) return false;
    }
    return true;
}