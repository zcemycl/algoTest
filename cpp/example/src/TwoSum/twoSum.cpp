#include "twoSum.h"
#include <vector>
#include <map>
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
    map<int,int> mapNum2Idx;
    for (int i=0;i<nums.size();i++){
        int dif = target - nums[i];
        // if (mapNum2Idx.find(dif)!=mapNum2Idx.end()&&mapNum2Idx.find(dif)->second!=i){
        if (mapNum2Idx.count(dif)>0){
            v.push_back(i);
            v.push_back(mapNum2Idx.find(dif)->second);
            return v;
        }
        mapNum2Idx.insert(pair<int,int>(nums[i],i));
    };
    v.push_back(-1);
    return v;
}

