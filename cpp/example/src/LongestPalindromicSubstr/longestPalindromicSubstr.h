#include <iostream>
#include <string>

using namespace std;

class longestPalindromicSubstr{
    public:
        string res,s;
        int length,maxLen;
        longestPalindromicSubstr();
        void loop(int start,int end);
        string naive(string s);
};
