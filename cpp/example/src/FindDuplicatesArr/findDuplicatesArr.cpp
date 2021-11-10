#include "findDuplicatesArr.h"

vector<int> findDuplicatesArr::naive(vector<int>& n){
    map<int,int> d;
    vector<int> dup;
    for (auto i:n){
        map<int,int>::iterator it = d.find(i);
        if (it == d.end()) d[i]=1;
        else d[i] = d[i]+1;
    }
    map<int,int>::iterator ii;
    for (ii=d.begin(); ii!=d.end();ii++){
        if (ii->second==2) dup.push_back(ii->first);
    }
    return dup;
}
