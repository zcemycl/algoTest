#include "maxProdOf2ElementsInArr.h"

int maxProdOf2ElementsInArr::naive(vector<int>& nums){
    int first = *std::min_element(nums.begin(),nums.begin()+2);
    int second = *std::max_element(nums.begin(),nums.begin()+2);
    cout<<first<<second<<endl;
    for (int n : vector<int>(nums.begin()+2,nums.end())){
        if (n>first){
            if (n>second){
                int tmp = second;
                second = n;
                first = tmp;
            } else first = n;
        }
    }
    return (first-1)*(second-1);
}
