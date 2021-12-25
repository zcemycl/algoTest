#include "missingNum.h"

int missingNum::naive(vector<int>& nums){
    int res = nums.size();
    int length = nums.size();
    for (int i=0;i<length;i++)
        res^=(i^nums[i]);
    return res;
}
