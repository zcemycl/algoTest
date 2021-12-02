#include "twoSum2SortedArr.h"

vector<int> twoSum2SortedArr::naive(
    vector<int>& numbers,int target){
    int l=0,r=numbers.size()-1;
    while (l<r){
        int tmp = numbers[l]+numbers[r];
        if (tmp>target)
            r-=1;
        else if (tmp<target)
            l+=1;
        else if (tmp==target)
            break;
    }
    return vector<int>{l+1,r+1};
}
