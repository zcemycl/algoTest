#include <iostream>
#include <string>

using namespace std;

class palindromicSubstrs{
    public:
        string s;
        int res=0,length;
        void loop(int start,int end);
        int naive(string s);
};
