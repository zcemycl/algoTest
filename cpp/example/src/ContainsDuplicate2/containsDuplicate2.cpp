#include "containsDuplicate2.h"

bool containsDuplicate2::naive(vector<int>& nums,int k){
    map<int,int> prevIdxDict;
    map<int,int>::iterator it;
    for (int i=0;i<nums.size();i++){
        it = prevIdxDict.find(nums[i]);
        if (it!=prevIdxDict.end() && 
            abs(i-prevIdxDict[nums[i]])<=k) return true;
        prevIdxDict[nums[i]]=i;
    }
    return false;
}
