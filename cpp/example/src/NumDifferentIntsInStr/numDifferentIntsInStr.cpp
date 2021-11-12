#include "numDifferentIntsInStr.h"

int numDifferentIntsInStr::naive(string word){
    set<int> count = {};
    set<int> s = {'1','2','3','4','5','6','7','8','9','0'};
    set<int>::iterator it = count.begin();
    string prev = "";
    for (char tmps : word){
        if (s.find(tmps)!=s.end()){
            prev += tmps;
        } else {
            if (prev.length()!=0 && 
                count.find(stoi(prev))== count.end()){
                    count.insert(it,stoi(prev));
                }
            prev = "";
        }
    }
    if (prev.length()!=0 && 
        count.find(stoi(prev))== count.end()){
            count.insert(it,stoi(prev));
        }
    return count.size();
}
