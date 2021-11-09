#include "removeDuplicatesFromSortedArr.h"

int removeDuplicatesFromSortedArr::naive(vector<int> nums){
    if (nums.size()<=1) return nums.size();
    int maxVal = nums[0];
    int ptid = 1;
    for (int i=1;i<nums.size();i++){
        if (nums[i]>maxVal){
            maxVal = nums[i];
            int tmp = nums[i];
            nums[i] = nums[ptid];
            nums[ptid] = tmp;
            ptid += 1;
        }
    }
    return ptid;
}