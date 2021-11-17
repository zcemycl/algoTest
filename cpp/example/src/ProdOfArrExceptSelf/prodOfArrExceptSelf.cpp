#include "prodOfArrExceptSelf.h"

vector<int> prodOfArrExceptSelf::naive(vector<int>& nums){
    int Len = nums.size();
    vector<int> L(Len,1); vector<int> R(Len,1);
    for (int i=1;i<Len;i++)
        L[i] = L[i-1]*nums[i-1];
    for (int i=Len-1;i>0;i--)
        R[i-1] = R[i]*nums[i];
    for (int i=0;i<Len;i++)
        nums[i] = L[i]*R[i];
    return nums;
}
