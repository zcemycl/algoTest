#include "lengthOfLongestSubString.h"

int lengthOfLongestSubString::naive(string s){
    int maxLen = 0;
    vector<char> tmp = {};
    for (unsigned int i = 0; i < s.length();i++){
        vector<char>::iterator it = find(tmp.begin(),tmp.end(),s[i]);
        if (it != tmp.end()){
            int tmpind = distance(tmp.begin(),it);
            tmp = {tmp.begin()+tmpind+1,tmp.end()};
            tmp.push_back(s[i]);
        } else {
            tmp.push_back(s[i]);
        }
        if (tmp.size() > maxLen)
            maxLen = tmp.size();
        // for (vector<char>::iterator it=tmp.begin();it!=tmp.end();++it)
        //     cout << ' ' << *it;
        // cout<<endl;
    }

    return maxLen;
}