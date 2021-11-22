#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class mergeSort{
    public:
        static vector<int> merge(vector<int>& a,vector<int>& b);
        static vector<int> naive(vector<int>& nums);
};
