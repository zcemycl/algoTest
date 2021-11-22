#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <tuple>
#if __has_include(<experimental/filesystem>)
  #include <experimental/filesystem> 
  namespace fs = std::experimental::filesystem;
#else
  error "Missing the <filesystem> header."
#endif

using namespace std;

class countInversions{
    public:
        static vector<int> loadtxt2arr();
        static tuple<vector<int>,int> merge(vector<int>& a,vector<int>& b);
        static tuple<vector<int>,int> naive(vector<int>& nums);
};
