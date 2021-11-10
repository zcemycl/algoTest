#include "confusingNum.h"

bool confusingNum::naive(int n){
    if (n==0) return false;
    int orig = n, newN = 0; 
    set<int> non_reversible {2,3,4,5,7};
    map<int,int> reversible {{0,0},{1,1},{6,9},{8,8},{9,6}};
    int nDigits = (int) log10(n);

    for (int i=0;i<nDigits+1;i++){
        int remain = n%10;
        if (non_reversible.find(remain)!=non_reversible.end())
            return false;
        map<int,int>::iterator it = reversible.find(remain);
        if (it!=reversible.end())
            newN += reversible[remain]*pow(10,nDigits-i);
        n/=10;
    }

    return orig!=newN;
}
