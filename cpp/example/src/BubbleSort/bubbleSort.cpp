#include "bubbleSort.h"

vector<int> bubbleSort::naive(vector<int>& nums){
    for (int i=0;i<nums.size();i++){
        for (int j=i+1;j<nums.size();j++){
            if (nums[i]>nums[j]){
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }
    return nums;
}
