#include "findLuckyIntInArr.h"

int findLuckyIntInArr::naive(vector<int>& arr){
    map<int,int> d = {};
    map<int,int>::iterator it;
    for (int i=0;i<arr.size();i++){
        it = d.find(arr[i]);
        d[arr[i]] = it!=d.end()?d[arr[i]]+1:1;
    }
    int result=-1;
    it = d.begin();
    while (it!=d.end()){
        if (it->first==it->second){
            if (it->first > result)
                result = it->first;
        }
        it++;
    }
    return result;
}
