#include <iostream> 
#include <bitset>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class sortIntByNum1Bits{
    public:
        static vector<int> naive(vector<int>& arr);
        static bool comparison(const int x,const int y);
};
