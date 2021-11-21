#include <iostream>
#include <string>
#include <vector>

using namespace std;

class karatsubaMultiply{
    public:
        static vector<int> str2vec(string a);
        static string vec2str(vector<int>& a);
        static vector<int> add2vec(vector<int>& a,vector<int>& b);
        static vector<int> sub2vec(vector<int>& a,vector<int>& b);
        static vector<int> pad0(vector<int>& a,int n,string mode);
        static void printVec(vector<int>& a);
        static vector<int> naive(vector<int>& a,vector<int>& b);
};
