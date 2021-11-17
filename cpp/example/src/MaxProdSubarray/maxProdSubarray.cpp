#include "maxProdSubarray.h"

int maxProdSubarray::naive(vector<int>& nums){
    int maxVal = nums[0];
    int result = nums[0];
    int minVal = nums[0];
    for (int i=1;i<nums.size();i++){
        int curr = nums[i];
        int tmpMax = max({curr,maxVal*curr,minVal*curr});
        minVal = min({curr,maxVal*curr,minVal*curr});
        maxVal = tmpMax;
        result = max(maxVal,result);
    }
    return result;
}
