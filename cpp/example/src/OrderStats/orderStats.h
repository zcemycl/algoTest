#include <iostream>
#include <vector>
#include <string>
using namespace std;

class orderStats{
    public:
        static void policy(vector<int>& nums,int l,int r,string mode);
        static int naive(vector<int>& nums,int n,int l,int r,string mode);
};
