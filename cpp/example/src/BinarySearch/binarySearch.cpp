#include "binarySearch.h"

int binarySearch::naive(vector<int>& nums,int target){
    int left=0,right=nums.size()-1;
    while (left<=right){
        int pt = (left+right)/2;
        if (nums[pt]>target)
            right = pt-1;
        else if (nums[pt]<target)
            left = pt+1;
        else return pt;
    }
    return -1;
}
