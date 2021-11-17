#include "maxSubarray.h"

int maxSubarray::naive(vector<int>& nums){
    int maxVal = nums[0];
    int accum = nums[0];
    for (int i=1;i<nums.size();i++){
        accum = accum+nums[i];
        accum = max(accum,nums[i]);
        maxVal = max(maxVal,accum);
    }
    return maxVal;
}
