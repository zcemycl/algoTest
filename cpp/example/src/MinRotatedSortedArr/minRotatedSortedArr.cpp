#include "minRotatedSortedArr.h"

int minRotatedSortedArr::naive(vector<int>& n){
    int l=0; int r=n.size()-1;
    int result = n[0];
    while (l<r){
        int m=(l+r)/2;
        if (n[m]>n[l]){
            l = m;
        } else if (n[m]<n[r]){
            r = m;
        }
        if (l==r-1)
            break;
    }
    return min(n[r],result);
}
