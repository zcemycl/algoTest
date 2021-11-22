#include "mergeSort.h"

vector<int> mergeSort::merge(vector<int>& a,vector<int>& b){
    int i=0;int j=0;
    vector<int> result;
    while (i<a.size()&&j<b.size()){
        if (a[i]<b[j]){
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }
    if (i<a.size())
        result.insert(result.end(),a.begin()+i,a.end());
    if (j<b.size())
        result.insert(result.end(),b.begin()+j,b.end());
    return result;
}

vector<int> mergeSort::naive(vector<int>& nums){
    if (nums.size()<=1) return nums;
    int n = nums.size()/2;
    vector<int> L(nums.begin(),nums.begin()+n);
    vector<int> R(nums.begin()+n,nums.end());
    L = mergeSort::naive(L);
    R = mergeSort::naive(R);
    nums = mergeSort::merge(L,R);
    return nums;
}
