#include "findNuniqueIntSum2Zero.h"

vector<int> findNuniqueIntSum2Zero::naive(int n){
    vector<int> result = {};
    if (n%2==1) result.push_back(0);
    for (int i=0;i<n/2;i++){
        int tmp = i+1;
        result.push_back(tmp);
        result.push_back(-tmp);
    }
    return result;
}
