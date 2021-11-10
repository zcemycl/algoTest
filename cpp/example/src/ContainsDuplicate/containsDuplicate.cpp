#include "containsDuplicate.h"

bool containsDuplicate::naive(vector<int>& nums){
    set<int> d;
    for (int i:nums){
        if (d.find(i)!=d.end()) return true;
        d.insert(i);
    }
    return false;
}
