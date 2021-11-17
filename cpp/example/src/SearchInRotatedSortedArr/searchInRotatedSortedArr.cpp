#include "searchInRotatedSortedArr.h"

int searchInRotatedSortedArr::naive(vector<int>& n,int target){
    int l=0; int r=n.size()-1;
    while (l<=r){
        int m = (l+r)/2;
        if (n[m]==target) return m;
        if (n[m]>=n[l]){
            if (target>=n[l] && target<n[m])
                r = m-1;
            else l = m+1;
        } else {
            if (target<=n[r] && target>n[m])
                l = m+1;
            else r = m-1;
        }
    }
    return -1;
}
