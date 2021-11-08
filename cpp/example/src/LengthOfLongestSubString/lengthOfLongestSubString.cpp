#include "lengthOfLongestSubString.h"

int lengthOfLongestSubString::naive(string s){
    int maxLen = 0;
    vector<char> tmp = {};
    for (unsigned int i = 0; i < s.length();i++){
        cout<<s[i]<<endl;
        vector<char>::iterator it = find(tmp.begin(),tmp.end(),s[i]);
        if (it != tmp.end())
            cout<<"Duplicate!"<<endl;
        tmp.push_back(s[i]);
        
    }

    for (vector<char>::iterator it=tmp.begin();it!=tmp.end();++it)
        std::cout << ' ' << *it;
    return maxLen;
}