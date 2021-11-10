#include "rmElement.h"

int rmElement::naive(vector<int>& nums,int val){
    int ptid=0;
    for (int i=0;i<nums.size();i++){
        if (nums[i]!=val){
            int tmp = nums[ptid];
            nums[ptid]=nums[i];
            nums[i] = tmp;
            ptid+=1;
        }
    }

    return ptid;
}
