#include "duplicateZeros.h"

void duplicateZeros::naive(vector<int>& arr){
    int i=0,origLen=arr.size();
    vector<int>::iterator it = arr.begin();
    while (i<origLen){
        if (arr[i]==0){
            arr.pop_back();
            arr.insert(it+i,1,0);
            i+=1;
        }
        i+=1;
    }
}
