#include "twoSum.h"
#include <vector>
#include <iostream>

using namespace std;

vector<int> twoSum::naive(vector<int>& nums,int target){
    vector<int> v;
    int length = nums.size();
    for (int i=0;i<length;i++){
        for (int j=i+1;j<length;j++){
            if (nums[i]+nums[j] == target){
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }
}

vector<int> twoSum::hash(vector<int>& nums,int target){
    vector<int> v;
    return v;
}

